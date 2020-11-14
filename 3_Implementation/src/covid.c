#include "covid.h"
#include "test_covid.h"

 char *write(char *name,char *district, char *state){


    char *result = malloc(strlen(name)+ strlen(district)+ strlen(state) + 5);
    strcpy(result, name);
    strcat(result, ",");
    strcat(result, district);
    strcat(result, ",");
    strcat(result, state);


    // creating file pointer to work with files
    FILE *fptr;


    // opening file in appending mode
    fptr = fopen("D:\\covid.txt", "a");

    // exiting program
    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }



    fputs(result,fptr);
    fputs("\n",fptr);
    fclose(fptr);
    return 0;
}



char *read(char *value, int index){

   char delim[] = ",";
   int count = 0;
   FILE *fptr;
   char line[256];



   if ((fptr = fopen("D:\\covid.txt", "r")) == NULL) {
        printf("Error! opening file");

        exit(1);
    }

   while (fgets(line, sizeof(line), fptr))
   {

   char *ptr = strtok(line, delim);
   int i =0;

   while(ptr != NULL)
    {
      if( i == index )
        {
          if ( strcmp (ptr, value) == 0 )
            {
              count++;
            }
        }
        i++;
          ptr = strtok(NULL, delim);
    }
  }

     fclose(fptr);


  if( count > 20 )
  {
    printf("%s is in RED ZONE !!! \n",value );
  }
  else if ( count > 1 && count < 20 )
  {
    printf("%s is in ORANGE ZONE !!! \n",value );
  }
  else if(count==0)
  {
     printf("%s is in GREEN ZONE !!! \n",value );
  }

     return 0;
}




