#include <stdio.h>

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
        printf("Developers:");
    break;

    case 2:
        printf("Eine 2 wurde gedrückt");
    break;

    case 3:
        printf("Eine 3 wurde gedrückt");
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