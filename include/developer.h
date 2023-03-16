#ifndef DEVELOPER_H_
#define DEVELOPER_H_

#define NAME_LENGTH (25U)           //Erstellung eines Makros mit 25 Zeichen, nur positiv

typedef struct 
{
    char name[NAME_LENGTH];          
    char alias[NAME_LENGTH];
}developer;
void name_init(developer *developer_ptr,const char *name[max_length], const char *alias[max_length]);
void name_print(developer *developer_ptr);

#endif