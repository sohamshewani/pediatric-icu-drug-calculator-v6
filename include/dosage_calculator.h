#ifndef DOSAGE_CALCULATOR_H
#define DOSAGE_CALCULATOR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calculate_dosage(const char* drug_name, float patient_weight, float patient_age, int frequency);

#endif // DOSAGE_CALCULATOR_H
