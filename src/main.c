#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "developer.h"
#include "developer_group.h"

int input=0;

int main(void)
{
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
        printf("The Developers of this Programm are:\n");
        developer massimo, nico;
        name_init(&massimo,"Massimo Russo","MassimoRusso1");
        name_init(&nico, "Nico Rast","tsarocin");
        printf("Our real Names are:\n");
        printf("%s\n",massimo.name);
        printf("%s\n",nico.name);
        printf("Our nicknames are:\n");
        printf("%s\n",massimo.alias);
        printf("%s\n",nico.alias);
    break;

    case 2:
        printf("Here is our amazing Group Logo:");
        developer_group logo;
        logo_init(&logo,"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
        printf("%s",logo.logo);
        
    break;

    case 3:
        printf("This is our group:");
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