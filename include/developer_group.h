#ifndef DEVELOPER_GROUP_H_
#define DEVELOPER_GROUP_H_
#include "developer.h"

#define NAME_LENGTH (2500)           //Erstellung eines Makros mit 25 Zeichen, nur positiv

typedef struct 
{
    char logo[NAME_LENGTH]; 
    developer d[2];         
}developer_group;
void group_init(developer_group *, const char *logo,const developer *d);
void developer_print(developer_group *);
void logo_print(developer_group *);
#endif