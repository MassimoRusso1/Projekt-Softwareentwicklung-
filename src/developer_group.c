#include "developer_group.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
  
}