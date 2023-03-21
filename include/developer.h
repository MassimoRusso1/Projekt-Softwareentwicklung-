#ifndef DEVELOPER_H_                                                    //prevents multiple integration of the file
#define DEVELOPER_H_

#define NAME_LENGTH (25U)                                               // define a macro with 25 bits, only unsigned                                          

typedef struct                                                          //defines a data type "developer" 
{                                       
    char name[NAME_LENGTH];                                             //with two structure variables "name" and "alias", both defined with the macro "NAME_LENGTH" to 25 characters                            
    char alias[NAME_LENGTH];                                            //and "alias", both defined with the macro "NAME_LENGTH" to 25 characters
} developer;

void name_init(developer *const d, char name[], char alias[]);          //two functions "name_init" and "name_print" are defined to initialize and print the developers name and alias
void name_print(developer *const d);

#endif                                                                  //Exits the definition file