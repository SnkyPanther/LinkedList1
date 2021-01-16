///////////////////////////////////////////////////////////////////////////////
//   Alexandr Kochenkov       CLass: CSE222A     DATE: 1/15/2021             // 
//   The program has an option to make a Linker List in the length if 100    //
//   You can edit the linker list, view what is in it, delete, and search.   //
//   It has directions that are viewed when the incorrect format is entered  //
//									     //
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

#include "main.h"
void directions();
  
int main(){
  struct node LL[100];
  char response[100], command, extra;
  int number, result;
  init(LL);    // call the init function to "clean" the LL struct node
  while(1) {     //making the loop go into infinit
    printf(">");
    fgets(response, 100, stdin);  //takes in the response of the user
    result=sscanf(response, "%c %d %c", &command, &number, &extra);    //it breaks up the array into different variables
    if(result == 2)  {   
      if(command == 'i'){           //checks the command and this is for adding the number
        if(search(LL, number) == 0) {   //searches if the number exists in the list
          if(add(LL, number) == 1) {    //if the number is not in the list it adds it
            printf("SUCCESS\n");
          }
          else {
            printf("OUT OF SPACE\n");   
          }
        }
        else {
          printf("NODE ALREADY IN LIST\n");
        }
      }
      else if(command == 's') {    // this is the option for searching the number in the list
        if(search(LL, number) == 1) {  //if the number is within the list it will print found
          printf("FOUND\n");
        }
        else  {
          printf("NOT FOUND\n");
        }
      }
      else if(command == 'd') {      //this is the option for deleting
        if(search(LL, number) == 1) {    //first searches if the number exists in the list
          delete(LL, number);     //if there is it deletes the number
          printf("SUCCESS\n");
        }
        else {
          printf("NODE NOT FOUND\n");
        }
      }
      else {
        directions();           //if the program does not recognize, it prints out the directions
      }
    }
    else if(result == 1) {
      if(command == 'p')  {   //prints out the numbers that are all in the linker list
        print(LL);
      }
      else if(command == 'x' ) {   //closes the function when x is entered
        return 0;
      }
      else {
        directions();
      }
    }
    else {
      directions();
    }
  }
}

void directions() {         // this is the directions that are printed in the when the input is not put in correctly
  printf("\n\nPlease enter one of the following commands:\n");
  printf("i number    insert number into the list\n");
  printf("p           print the list in order\n");
  printf("s number    search for number in the list\n");
  printf("d number    delete number from the list\n");
  printf("x           exit the program\n");
}
