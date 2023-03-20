#ifndef DEVELOPER_GROUP_H_
#define DEVELOPER_GROUP_H_


#define MAX_LENGTH (250) // Erstellung eines Makros mit 25 Zeichen, nur positiv

typedef struct
{
    char logo[MAX_LENGTH];
    developer list[2];
} developer_group;
void group_init(developer_group *const d, char name1[], char alias1[], char name2[], char alias2[]);
void group_print(developer_group *const d);
void logo_print(developer_group *const d);
#endif