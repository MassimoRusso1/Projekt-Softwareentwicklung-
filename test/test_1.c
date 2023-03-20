#ifndef DEVELOPER_GROUP_H_
#define DEVELOPER_GROUP_H_

#define NAME_LENGTH (2500)           //Erstellung eines Makros mit 25 Zeichen, nur positiv

typedef struct 
{
    char logo[NAME_LENGTH]; 
    developer d[2];         
}developer_group;
void group_init(developer_group *, const char *logo,const developer *d);
void developer_print(developer_group *);
void logo_print(developer_group *);
#endif

#ifndef DEVELOPER_H_
#define DEVELOPER_H_

#define NAME_LENGTH (25U)           //Erstellung eines Makros mit 25 Zeichen, nur positiv

typedef struct 
{
    char name[NAME_LENGTH];          
    char alias[NAME_LENGTH];
}developer;
void name_init(developer *developer_ptr,const char *name[NAME_LENGTH], const char *alias[NAME_LENGTH]);
void name_print(developer *developer_ptr);

#endif

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

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

void logo_print(developer_group *logo_ptr)
{
  if(logo_ptr == NULL){
    printf("\033[4;33mdeveloper_group init: invalid data\n\033[0m");
  }
  else{
    printf("%s\n\n", &logo_ptr ->logo);
    printf("\n");
  }
}
void group_print(developer_group *developer_ptr){
  if (developer_ptr == NULL)
  {
    printf("033[4;33mdeveloper_group init: invalid data\n\033[0m");
  }
  else
  {
    logo_print(developer_ptr);
    name_print(developer_ptr->d);

  }
    printf("-----------------------\n\n This is our group:\n");
  logo_print(developer_ptr);
  name_print(developer_ptr->d);
  printf("-----------------------\n");
}

void name_init(developer *developer_ptr, const char *name[NAME_LENGTH], const char *alias[NAME_LENGTH])
{
  if (developer_ptr = NULL)
  {
    printf("\033[4;33mdeveloper init: invalid data\n\033[0m");        //error message if object is not valid
  }
  else
  {
    strncpy(developer_ptr->name, name, strlen(name) + 1);             //string is copying into the struct, till the termination sign
    strncpy(developer_ptr->alias, alias, strlen(alias) + 1);
  }
}
//This function prints the information from the "developer" structure to the screen. A pointer to a developer object is passed. 
void name_print(developer *developer_ptr)
{
  printf("____________________________\n\n");
  for (int i = 0; i <= 1; i++)
  {
    printf("**********************\n name: \033[4;35m%s\033[0m\n alias: %s\n **********************", developer_ptr[i].name, developer_ptr[i].alias);
  }
}
