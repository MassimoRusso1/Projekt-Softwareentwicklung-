#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int input=0;
typedef struct 
{
    char name[20];          
    char alias[20];
}developer;
void name_init(developer *const d, const char name[], const char alias[]);

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
        developer Massimo, Nico;
        name_init(&Massimo,"Massimo
        Russo","MassimoRusso1");
        printf("%s\n", Massimo.name);
    break;

    case 2:
        printf("Here is our amazing Group Logo:");
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

void name_init(developer *const d, const char name[], const char alias[]){
  strncpy(d->name, name, strlen(name) + 1);
  strncpy(d->alias, alias, strlen(alias)+1);
}
