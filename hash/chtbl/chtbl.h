#ifndef _CHTBL_
  #define _CHTBL_
  #include <stdlib.h>
  #include "../../list/list.h"  

  typedef struct _CHTbl_ {
    int buckets;
    int (*h)(const void *key);
    int (*match)(const void *key1, const void *key2);
    void (*destory)(void *data);
    int size;
    List *table;
  } CHTbl;
  
  int chtbl_init (CHTbl *htbl, int buckets, int (*h)(const void *key), 
      int (*match)(const void *key1, const void *key2), void (*destory)(void *data));
  void chtbl_destory(CHTbl *htbl);
  int chtbl_insert(CHTbl *htbl, const void *data);
  int chtbl_remove(CHTbl *htbl, void **data);
  int chtbl_lookup(CHTbl *htbl, void **data);

  #define chtbl_size(htbl) ((htbl)->size)
#endif
