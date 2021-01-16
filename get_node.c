#include <stdio.h>
#include "main.h"
#define MYNULL 0

int get_node(struct node *LL)  {
  for(int i=1; i<=99; i++) {   //this function makes sure that there is no more that 100 numbers can be listed
    if(LL[i].valid == 0) {     //changes the valid value from 0 to 1
      LL[i].valid = 1;
      return i; 
    } 
  }
  return MYNULL;

}
