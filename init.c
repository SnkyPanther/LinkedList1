#include "main.h"
#define MYNULL 0

void init(struct node *LL) {
  LL[0].next=MYNULL;               //this cleans that list and changes the value of the valid to 0
  for(int i=1; i<=99; i++){
    LL[i].valid=0;
  }
}
