//prevents multiple integration of the file
#ifndef DEVELOPER_H_
#define DEVELOPER_H_

// Erstellung eines Makros mit 25 Zeichen, nur positiv
#define NAME_LENGTH (25U)                                           
//defines a data type "developer" with two structure variables "name" and "alias", both defined with the macro "NAME_LENGTH" to 25 characters
typedef struct
{
    char name[NAME_LENGTH];                                         
    char alias[NAME_LENGTH];
} developer;
//two functions "name_init" and "name_print" are defined to initialize and print a developer's name and alias
void name_init(developer *const d, char name[], char alias[]);
void name_print(developer *const d);

#endif