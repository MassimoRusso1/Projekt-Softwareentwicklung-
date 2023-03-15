#ifndef DEVELOPER_GROUP_H_
#define DEVELOPER_GROUP_H_

#define NAME_LENGTH (2500)           //Erstellung eines Makros mit 25 Zeichen, nur positiv

typedef struct 
{
    char logo[NAME_LENGTH];          
}developer_group;
void logo_init(developer_group *const l, const char logo[]);
#endif