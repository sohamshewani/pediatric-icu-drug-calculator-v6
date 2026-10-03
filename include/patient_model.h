#ifndef PATIENT_MODEL_H
#define PATIENT_MODEL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Patient {
    char name[50];
    float weight;
    int age;
};

typedef struct Patient Patient;

void init_patient(Patient* patient);
void set_patient_name(Patient* patient, const char* name);
void set_patient_weight(Patient* patient, float weight);
void set_patient_age(Patient* patient, int age);
void print_patient(Patient patient);

#endif // PATIENT_MODEL_H
