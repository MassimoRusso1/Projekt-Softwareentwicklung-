// This header file contains the definition of the 'developer' struct.
#include "developer.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// This function takes a pointer to a 'developer' struct.
// It uses 'strncpy' to copy the name and alias into the struct.
void name_init(developer *const d, char name[], char alias[])
{
    strncpy(d->name, name, strlen(name) + 1); 
    strncpy(d->alias, alias, strlen(alias) + 1);
}

// This function takes a pointer to a 'developer' struct and prints the name and alias.
// If the pointer is NULL, it prints an error message instead.
// It also adds some formatting to the output, including colorizing the text.
void name_print(developer *const d)
{
    if (d == NULL)
    {
        printf("invalid value\n");
    }
    else
    {
        printf("************************\n");
        printf("\033[0:36m"); // set color to cyan
        printf(" Name: %s\n Alias: %s\n", d->name, d->alias);
        printf("\033[0m"); // reset color
        printf("************************\n");
    }
}
