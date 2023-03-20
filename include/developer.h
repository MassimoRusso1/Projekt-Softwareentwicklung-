#ifndef DEVELOPER_H_
#define DEVELOPER_H_

#define NAME_LENGTH (25U) // Erstellung eines Makros mit 25 Zeichen, nur positiv

typedef struct
{
    char name[NAME_LENGTH];
    char alias[NAME_LENGTH];
} developer;
void name_init(developer *const d, char name[], char alias[]);
void name_print(developer *const d);

#endif