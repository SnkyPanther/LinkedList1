#include <stdio.h>
#include "main.h"
#define MYNULL 0

int search(struct node *LL, int number)  {
  int num=0;
  while(LL[num].next != MYNULL) {   //this function searches in the Linker List if there is any number that was entered
    num=LL[num].next;
    if(LL[num].data == number) {  // if there is the number that was located it returns 1 if not 0
      return 1;
    }
  }
  return 0;

}
