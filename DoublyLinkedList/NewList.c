//#include <stdlib.h>
#include "DoublyLinkedList.h"

LIST NewList() {
  LIST L = malloc(sizeof(struct List));
  if(L) {
    L->Head = (NODE)&L->Tail;
    L->LastNode = L->Head;
    L->Tail = NULL;
    return L;
  }
  return NULL;
}