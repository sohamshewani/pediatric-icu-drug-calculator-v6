#include "patient_model.h"

void init_patient(Patient* patient) {
    patient->name[0] = '\0';
    patient->weight = 0.0;
    patient->age = 0;
}

void set_patient_name(Patient* patient, const char* name) {
    if (name == NULL) {
        fprintf(stderr, "Name cannot be null.\n");
        exit(EXIT_FAILURE);
    }
    strncpy(patient->name, name, 49);
}

void set_patient_weight(Patient* patient, float weight) {
    if (weight <= 0) {
        fprintf(stderr, "Weight must be positive.\n");
        exit(EXIT_FAILURE);
    }
    patient->weight = weight;
}

void set_patient_age(Patient* patient, int age) {
    if (age < 0) {
        fprintf(stderr, "Age must be non-negative.\n");
        exit(EXIT_FAILURE);
    }
    patient->age = age;
}

void print_patient(Patient patient) {
    printf("Patient: %s, Weight: %f kg, Age: %d years\n", patient.name, patient.weight, patient.age);
}
