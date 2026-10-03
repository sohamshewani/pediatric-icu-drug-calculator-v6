#include "dosage_calculator.h"
#include "drug_database.h"

float calculate_dosage(const char* drug_name, float patient_weight, float patient_age, int frequency) {
    int index = find_drug(*drug_database, drug_database_size, drug_name);
    if (index == -1) {
        fprintf(stderr, "Drug not found in database.\n");
        exit(EXIT_FAILURE);
    }
    Drug drug = (*drug_database)[index];
    float adjusted_dose = drug.dose * (patient_weight / 70);
    return adjusted_dose / frequency;
}
