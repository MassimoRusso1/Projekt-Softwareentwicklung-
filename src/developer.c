#include "developer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void name_init(developer *developer_ptr, const char *name[NAME_LENGTH], const char *alias[NAME_LENGTH])
{
  if (developer_ptr = NULL)
  {
    printf("\033[4;33mdeveloper init: invalid data\n\033[0m");        //error message if object is not valid
  }
  else
  {
    strncpy(developer_ptr->name, name, strlen(name) + 1);
    strncpy(developer_ptr->alias, alias, strlen(alias) + 1);
  }
}