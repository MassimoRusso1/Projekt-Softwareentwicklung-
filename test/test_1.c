#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef DEVELOPER_H_
#define DEVELOPER_H_

#define NAME_LENGTH (25U) // Erstellung eines Makros mit 25 Zeichen, nur positiv

typedef struct
{
    char name[NAME_LENGTH];
    char alias[NAME_LENGTH];
} developer;
void name_init(developer *const d, char name[], char alias[]);
void name_print(developer *const d);

#endif
#ifndef DEVELOPER_GROUP_H_
#define DEVELOPER_GROUP_H_

#define MAX_LENGTH (250) // Erstellung eines Makros mit 25 Zeichen, nur positiv

typedef struct
{
    char logo[MAX_LENGTH];
    developer list[2];
} developer_group;
void group_init(developer_group *const d, char name1[], char alias1[], char name2[], char alias2[]);
void group_print(developer_group *const d);
void logo_print(developer_group *const d);
#endif
int main(void)
{
    int input = 0;

    while (1)
    {
        printf("\033[4;92m========================\n");
        printf("Choose your action: \n");
        printf("List Developers \t[1]\n");
        printf("Print Group Logo \t[2]\n");
        printf("Print Group \t\t[3]\n");
        printf("Exit \t\t\t[4]\n");
        printf("========================\033[0m\n");
        printf("Enter your selection: ");

        scanf("%d", &input);

        switch (input)
        {

        case 1:
            printf("The Developers of this Programm are:\n");
            developer massimo, nico;
            name_init(&massimo, "Massimo Russo", "MassmioRusso1");
            name_init(&nico, "Nico Rast", "tsarocin");
            name_print(&massimo);
            name_print(&nico);
            break;

        case 2:
            printf("This is our Logo:\n");
            developer_group logo;
            logo_print(&logo);

            break;

        case 3:
            printf("This is our group:\n");
            developer_group gr;
            group_init(&gr, "Massimo Russo", "MassimoRusso1", "Nico Rast", "tsarocin");
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
// This function initializes the "Developer" structure with the two parameters name and alias
void name_init(developer *const d, char name[], char alias[])
{
    strncpy(d->name, name, strlen(name) + 1); // string is copying into the struct, till the termination sign
    strncpy(d->alias, alias, strlen(alias) + 1);
}
// This function prints the information from the "developer" structure to the screen. A pointer to a developer object is passed.
void name_print(developer *const d)
{
    if (d == NULL)
    {

        printf("invalid value\n");
    }
    else
    {
        printf("************************\n");
        printf("\033[0:36m");
        printf(" Name: %s\n Alias: %s\n", d->name, d->alias);
        printf("\033[0m");
        printf("************************\n");
    }
}

//define a struct named grouplogo as a string
developer_group grouplogo = {.logo = {
"\n"
"88**Yb  dP*Yb  .dP*Y8 .dP*Y8\n"
"88__dP dP   Yb `Ybo.* `Ybo.* \n"
"88**Yb Yb   dP o.`Y8b o.`Y8b\n"
"88oodP  YbodP  8bodP' 8bodP'\n"
"\0"}};

//defines a function called "group_init" that initializes our team and takes parameters as pointer to developer group and four strings containing the names and aliases. 
//It also copies names and alias to a developer list.

void group_init(developer_group *const d, char dev1[], char dev1_alias[], char dev2[], char dev2_alias[])
{
  strncpy(d->list[0].name, dev1, strlen(dev1) + 1);
  strncpy(d->list[0].alias, dev1, strlen(dev1_alias) + 1);
  strncpy(d->list[1].name, dev2, strlen(dev2) + 1);
  strncpy(d->list[1].alias, dev2, strlen(dev2_alias) + 1);
}
void group_print(developer_group *const d)
{
  printf("************************\n Name: %s\n Alias: %s\n Name: %s\n Alias: %s\n************************\n", d->list[0].name, d->list[0].alias, d->list[1].name, d->list[1].alias);
}
void logo_print(developer_group *d)
{
  if (d == NULL)
  {
    printf("invalid value\n");
  }
  else
  {
    printf("\033[0:36m");
    printf("%s\n", grouplogo.logo);
    printf("\033[0m");
  }
}