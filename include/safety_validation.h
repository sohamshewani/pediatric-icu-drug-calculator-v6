#ifndef SAFETY_VALIDATION_H
#define SAFETY_VALIDATION_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validate_drug_interactions(Drug* db, int size, const char* drug_name);

#endif // SAFETY_VALIDATION_H
