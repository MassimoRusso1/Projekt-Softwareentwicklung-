#include "developer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//This function initializes the "Developer" structure with the two parameters name and alias
void name_init(developer *d, char *name[], const char *alias[])
{
    strncpy(d->name, name, strlen(name) + 1);             //string is copying into the struct, till the termination sign
    strncpy(d->alias, alias, strlen(alias) + 1);
  
}
//This function prints the information from the "developer" structure to the screen. A pointer to a developer object is passed. 
void name_print(developer *d)
{
    printf("**********************\n name: %s\n alias: %s\n **********************", d->name.name, d->alias);
}