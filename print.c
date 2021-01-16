#include <stdio.h>
#include "main.h"
#define MYNULL 0

void print(struct node *LL) {
  int n=0;
  while(LL[n].next != MYNULL) { //this functions prints out the list in a single line and it goes through a loop
    n=LL[n].next;
    printf("%d ", LL[n].data);
  }
  printf("\n");

}
