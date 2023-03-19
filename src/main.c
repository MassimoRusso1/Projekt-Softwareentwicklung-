#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "developer.h"
#include "developer_group.h"


int main(void)
{
  int input = 0;
  developer_group category;                                         //Initializes a variable of type developer_group.
  developer Massimo, Nico;
  

  developer_group *categoryptr = &category;                         // Initializes a developer_group pointer and take it to the address of the category variable.
  developer *devel = category.d;

  developer *devel1 = categoryptr->d;
  developer *devel2 = ++devel1;
  devel1--;

  name_init(devel1, "Massimo Russo", "MassimoRusso1");
  name_init(devel2, "Nico Rast", "tsarocin");

  developer *print_pointer[2] = {&Massimo, &Nico};
  developer dl[2] = {Massimo, Nico};
  developer *pointer_dl = &dl;

  group_init(&category,"%s\n ***************************LOGO**********************************",&Nico);


while(1){
printf("\033[4;92m========================\n");
printf("Choose your action: \n");
printf("List Developers \t[1]\n");
printf("Print Group Logo \t[2]\n");
printf("Print Group \t\t[3]\n");
printf("Exit \t\t\t[4]\n");
printf("========================\033[0m\n");
printf("Enter your selection: ");

    scanf("%d", &input);

    switch(input){

    case 1:
        //printf("The Developers of this Programm are:\n");
        //developer massimo, nico;
        //name_init(&massimo,"Massimo Russo","MassimoRusso1");
        //name_init(&nico, "Nico Rast","tsarocin");
        //printf("Our real Names are:\n");
        //printf("%s\n",massimo.name);
        //printf("%s\n",nico.name);
        //printf("Our nicknames are:\n");
        //printf("%s\n",massimo.alias);
        //printf("%s\n",nico.alias);
        name_print(dl);
        
    break;

    case 2:
        logo_print(&category);

        
    break;

    case 3:
        printf("This is our group:");
        developer_print(categoryptr);
    break;

    case 4:
     return 0;   
    break;
    
    default:
        printf("That was not a valid input!");
    break;
    }
   }
  return 0;
}