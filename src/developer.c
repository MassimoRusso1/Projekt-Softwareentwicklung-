#include "developer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void name_init(developer *const d, const char name[], const char alias[]){
  strncpy(d->name, name, strlen(name) + 1);
  strncpy(d->alias, alias, strlen(alias)+1);
}