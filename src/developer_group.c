#include "developer_group.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

developer_group grouplogo = {.logo = {
                                 "++++++++++++++++++++++++++++++++\n"
                                 "++++++++++++++++++++++++++++++++\n"
                                 "\0"}};
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