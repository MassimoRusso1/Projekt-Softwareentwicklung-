#include "developer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//This function initializes the "Developer" structure with the two parameters name and alias
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