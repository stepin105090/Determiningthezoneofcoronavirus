#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "covid.h"

int main() {


    char typeofInput[1];char input[]="I"; char output[]="O";
    char districtOrState[1];
    char value[20];
    char district[] ="D";
    char state[] ="S";
    int index = 0;
    char Name[100];char District[100];char State[100];



  printf("Enter 'I' for entering patient details and 'O' for checking the zone:\n ");
  scanf("%s", typeofInput);

  if(strcmp (typeofInput,input) == 0 )
  {

   printf("Enter name: ");
   scanf("%s", Name);
   printf("Enter district: ");
   scanf("%s",District);
   printf("Enter state: ");
   scanf("%s", State);

   write(Name,District,State);

  }

  else if (strcmp(typeofInput, output) == 0)
  {

    printf("Enter either D ( district ) or S (state): ");
    scanf("%s", districtOrState);

    if( strcmp(districtOrState, district) == 0)
    {
      printf("Enter district: ");
      scanf("%s", value);
      index = 1;
    }
    else if( strcmp(districtOrState, state) == 0)
    {
      printf("Enter state: ");
      scanf("%s", value);
      index = 2;
    }
    else
    {

      printf("No match, Enter either 'D' ( District) or 'S' (State) ");
      exit(1);
    }

     read(value,index);

  }
  else
  {
    printf("please enter a valid value, either 'I' or 'O' ");
    exit(1);
  }

     return 0;
   }

