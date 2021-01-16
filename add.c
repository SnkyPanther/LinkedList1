#include "main.h"  //includes the functions and the struct node
#define MYNULL 0   //defines the MYNULL

int add(struct node *LL, int number) {
  int i=get_node(LL);   //get_node is a function
  if(i != MYNULL){    
    LL[i].data = number; //
    LL[i].valid = 1;  // turns the i into valid
    int n=0;
    while(LL[n].next != MYNULL && number > LL[LL[n].next].data){   //it goes through the linker list and then it
      n=LL[n].next;                                                 // sorts it to be place from less than to greater than
    }
    LL[i].next=LL[n].next;              // add the information into the spot
    LL[n].next=i;
    return 1;
  }

  return 0; // if the i is MYNULL, it will return 0
}
