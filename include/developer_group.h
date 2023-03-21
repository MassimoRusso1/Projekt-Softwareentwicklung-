#ifndef DEVELOPER_GROUP_H_                                                                              //prevents multiple integration of the file
#define DEVELOPER_GROUP_H_
#include "developer.h"                                                                                  //includes the file "developer.h"

#define MAX_LENGTH (250)                                                                                //Macro for logo with a maximum leght of 250 
typedef struct                                                                                          //Define a new data type named "developer_group"
{
    char logo[MAX_LENGTH];                                                                              //defines an array named logo with a maximum length
    developer list[2];                                                                                  //defines an array named "list" with the two developers
} developer_group;

void group_init(developer_group *const d, char name1[], char alias1[], char name2[], char alias2[]);    //Defines a function to initialize group information and developer information
void group_print(developer_group *const d);                                                             //Defines a function to return the information about our group.
void logo_print(developer_group *const d);                                                              //Defines a function to print our group logo
#endif                                                                                                  //Exits the definition file