
#include <stdio.h>                                                                              //including the libraries and headerfiles                            
#include <stdlib.h>
#include <string.h>
#include "developer.h"
#include "developer_group.h"

int main(void)                                                                                  //main programm
{
    int input = 0;                                                                              //declaration of the input variable

    while (1)                                                                                   //starts an endless loop
    {
        printf("\033[4;92m========================\n");                                         //print of the interface
        printf("Choose your action: \n");
        printf("List Developers \t[1]\n");
        printf("Print Group Logo \t[2]\n");
        printf("Print Group \t\t[3]\n");
        printf("Exit \t\t\t[4]\n");
        printf("========================\033[0m\n");
        printf("Enter your selection: \n");

        scanf("%d", &input);                                                                    //reading the input data and saving to "input"

        switch (input)                                                                          //Query of the variable input in a switch case        
        {

        case 1:                                                                                 //first case contains:
            printf("The Developers of this Programm are:\n");
            developer massimo, nico;                                                            //declaration of the variables massimo and nico as type developer
            name_init(&massimo, "Massimo Russo", "MassmioRusso1");                              //initialisation the function of Massimo and Nico to pointer
            name_init(&nico, "Nico Rast", "tsarocin");
            name_print(&massimo);                                                               //prints the values of the pointers
            name_print(&nico);
            break;

        case 2:                                                                                 //second case contains:
            printf("This is our Logo:\n");                                                      
            developer_group logo;                                                               //declaration of the variable logo as type developer_group
            logo_print(&logo);                                                                  //and print our logo

            break;

        case 3:                                                                                 //third case contains:
            printf("This is our group:\n");
            developer_group gr;                                                                 //declaration of the variable gr as type developer_group
            group_init(&gr, "Massimo Russo", "MassimoRusso1", "Nico Rast", "tsarocin");         //initialisation of the variable with our names and alias
            logo_print(&logo);                                                                  //print the logo
            group_print(&gr);                                                                   //print our names and alias
            break;

        case 4:                                                                                 //fourth case contains:
            return 0;                                                                           //break the switch case
            break;

        default:                                                                                //default case
            printf("That was not a valid input!\n");                                              //if there is not a number between 1 and 4, the programm prints an error message
            break;
        }
    }
    return 0;
}