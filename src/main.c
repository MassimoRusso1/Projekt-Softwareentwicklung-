#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "developer.h"
#include "developer_group.h"


int main(void)
{
  int input = 0;

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
        printf("The Developers of this Programm are:\n ***********************\n");
        developer massimo, nico;
        name_init(&massimo, "Massimo Russo","MassmioRusso1");
        name_init(&nico, "Nico Rast","tsarocin");
        name_print(&massimo);
        name_print(&nico);
        printf("***********************\n");
    break;

    case 2:
        printf("This is our Logo:\n");
        developer_group logo;
        logo_print(&logo);

        
    break;

    case 3:
        printf("This is our group:\n");
       developer_group gr;
       group_init(&gr, "Massimo Russo","MassimoRusso1","Nico Rast","tsarocin");
       logo_print(&logo);
       group_print(&gr);
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