#include "developer_group.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void logo_init(developer_group *const l, const char logo[]){
  strncpy(l->logo, logo, strlen(logo) + 1);
}