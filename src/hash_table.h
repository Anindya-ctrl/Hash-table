#include <stdlib.h>

struct HASH_TABLE_ELEMENT {
  char *key;
  char *value;
};
struct HASH_TABLE {
  size_t size;
  size_t count;
  struct HASH_TABLE_ELEMENT **elements;
};

typedef struct HASH_TABLE_ELEMENT HT_ELEM;
typedef struct HASH_TABLE HT;
