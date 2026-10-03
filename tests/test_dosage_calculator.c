#include <stdio.h>
#include <stdlib.h>
#include "dosage_calculator.h"
#include "drug_database.h"

int main() {
    Drug* db;
    init_drug_database(&db, 3);
    add_drug(&db, 0, (Drug){.name = "Amoxicillin", .dose = 10, .frequency = 3, .duration = 5});
    add_drug(&db, 1, (Drug){.name = "Ibuprofen", .dose = 20, .frequency = 4, .duration = 3});
    add_drug(&db, 2, (Drug){.name = "Paracetamol", .dose = 15, .frequency = 5, .duration = 7});
    float dosage = calculate_dosage("Amoxicillin", 50, 1, 3);
    printf("Calculated dosage: %f mg\n", dosage);
    free_drug_database(&db, 3);
    return 0;
}
