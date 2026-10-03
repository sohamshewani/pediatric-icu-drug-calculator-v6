#include "main.h"
#include "drug_database.h"
#include "dosage_calculator.h"
#include "safety_validation.h"
#include "patient_model.h"

void initialize_system() {
    init_drug_database(&drug_database, DRUG_DATABASE_SIZE);
    init_patient(&patient);
}

void run_system() {
    Drug database[DRUG_DATABASE_SIZE];
    init_drug_database(&database, DRUG_DATABASE_SIZE);
    add_drug(&database, 0, (Drug){.name = "Amoxicillin", .dose = 10, .frequency = 3, .duration = 5});
    add_drug(&database, 1, (Drug){.name = "Ibuprofen", .dose = 20, .frequency = 4, .duration = 3});
    add_drug(&database, 2, (Drug){.name = "Paracetamol", .dose = 15, .frequency = 5, .duration = 7});
    int index = find_drug(database, 3, "Amoxicillin");
    if (index != -1) {
        if (validate_drug_interactions(database, 3, "Amoxicillin")) {
            float dosage = calculate_dosage("Amoxicillin", 50, 1, 3);
            printf("Calculated dosage: %f mg\n", dosage);
        }
    }
    print_patient(patient);
    free_drug_database(&database, 3);
    free_patient(&patient);
}

void clean_up_system() {
    free_drug_database(&drug_database, DRUG_DATABASE_SIZE);
    free_patient(&patient);
}
