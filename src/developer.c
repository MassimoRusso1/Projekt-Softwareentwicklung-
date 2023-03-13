#include "developer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void name_init(developer *const d, const char name[]){
    int d1;
    int d2;

    name_init(&d1, "Massimo Russo");
    name_init(&d2, "Nico Rast");
}
void alias_init(developer *const a, const char alias[]){
    int a1, a2;

    alias_init(&a1, "MassimoRusso1");
    alias_init(&a2, "tsarocin");

    
}