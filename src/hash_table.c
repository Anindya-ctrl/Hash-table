#include "hash_table.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

HT_ELEM *new_element(const char *k, const char *v) {
  HT_ELEM *el = malloc(sizeof(HT_ELEM));
  el->key = strdup(k);
  el->value = strdup(v);

  return el;
}

HT *new_ht() {
  HT *ht = malloc(sizeof(HT));
  ht->size = 69;
  ht->count = 0;
  ht->elements = calloc(ht->size, sizeof(HT *));

  return ht;
}

void delete_element(HT_ELEM *el) {
  free(el->key);
  free(el->value);
  free(el);
}

void delete_hash_table(HT *ht) {
  for (int i = 0; i < ht->size; ++i) {
    HT_ELEM *el = ht->elements[i];
    if (el != NULL)
      delete_element(el);
  }

  free(ht->elements);
  free(ht);
}

int main() {
  HT *ht = new_ht();
  delete_hash_table(ht);
}
