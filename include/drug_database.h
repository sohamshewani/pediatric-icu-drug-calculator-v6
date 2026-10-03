#ifndef DRUG_DATABASE_H
#define DRUG_DATABASE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* name;
    float dose;
    int frequency;
    float duration;
} Drug;

void init_drug_database(Drug** db, int size);
void add_drug(Drug** db, int index, Drug drug);
void remove_drug(Drug** db, int index);
int find_drug(Drug* db, int size, const char* name);
void print_drug_database(Drug* db, int size);
void free_drug_database(Drug** db, int size);

#endif // DRUG_DATABASE_H
