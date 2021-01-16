#include <stdio.h>
#include "main.h"
#define MYNULL 0

void release_node(struct node *LL, int indexnumber) {
  LL[indexnumber].valid=MYNULL;    //it puts the number that was removed to have its valid value to be set to MYNULL
}

