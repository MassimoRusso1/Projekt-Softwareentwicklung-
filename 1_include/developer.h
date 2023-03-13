#ifndef DEVELOPER_H_
#define DEVELOPER_H_

#define NAME_LENGTH (25U)           //Erstellung eines Makros mit 25 Zeichen, nur positiv

typedef struct 
{
    char name1[NAME_LENGTH];          
    char alias1[NAME_LENGTH];

    char name2[NAME_LENGTH];          
    char alias2[NAME_LENGTH];
}developer;
void developer_init(developer1 *const d1, const char name1[]);
void developer_init(developer2 *const d2, const char name2[]);
#endif