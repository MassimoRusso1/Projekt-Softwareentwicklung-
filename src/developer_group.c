#include "developer_group.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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