#include "developer_group.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a struct named "grouplogo" as a string
developer_group grouplogo = {.logo = {
                                 "\n"
                                 "88**Yb  dP*Yb  .dP*Y8 .dP*Y8\n"
                                 "88__dP dP   Yb `Ybo.* `Ybo.* \n"
                                 "88**Yb Yb   dP o.`Y8b o.`Y8b\n"
                                 "88oodP  YbodP  8bodP' 8bodP'\n"}};

// Define a function called "logo_print" that takes a pointer to the "developer_group" struct.
// This function prints the logo of the developer group to the console.
void logo_print(developer_group *d)
{
  if (d == NULL) // Pointer check
  {
    printf("invalid value\n"); // Print an error message 
  }
  else
  {
    printf("\033[0:36m"); // Set the text color
    printf("%s\n", grouplogo.logo); // Print the logo of the developer group
    printf("\033[0m"); // Reset the text color
  }
}

// Define a function called "group_init" that initializes the developer group with the given names and aliases.
// This function takes a pointer to the "developer_group" struct.
// The function copies the names and aliases to the "list" array of the "developer_group" struct.
void group_init(developer_group *const d, char dev1[], char dev1_alias[], char dev2[], char dev2_alias[])
{
  strncpy(d->list[0].name, dev1, strlen(dev1) + 1); // Copy the name of the first developer 
  strncpy(d->list[0].alias, dev1, strlen(dev1_alias) + 1); // Copy the alias of the first developer 
  strncpy(d->list[1].name, dev2, strlen(dev2) + 1); // Copy the name of the second developer 
  strncpy(d->list[1].alias, dev2, strlen(dev2_alias) + 1); // Copy the alias of the second developer
}

// Define a function called "group_print" that prints the names and aliases of the developers.
// This function takes a pointer to the "developer_group" struct.
void group_print(developer_group *const d)
{
  printf("************************\n Name: %s\n Alias: %s\n Name: %s\n Alias: %s\n************************\n", d->list[0].name, d->list[0].alias, d->list[1].name, d->list[1].alias);
}
