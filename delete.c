#include <stdio.h>
#include "main.h"
#define MYNULL 0

void delete(struct node *LL, int number)  {
  int curr=0, previous ;   //curr is for current
  while(LL[curr].next != MYNULL)  {  //loops until it becomes MYNULL
    previous=curr;        
    curr=LL[curr].next;              
    if(LL[curr].data == number) {   //check if equal to number entered
      LL[previous].next=LL[curr].next; 
      release_node(LL, curr);   //release_node is another function
      return;
    }
  }
}
