#include "safety_validation.h"
#include "drug_database.h"

int validate_drug_interactions(Drug* db, int size, const char* drug_name) {
    int index = find_drug(db, size, drug_name);
    if (index == -1) {
        fprintf(stderr, "Drug not found in database.\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < size; i++) {
        if (i != index) {
            if (strcmp(db[i].name, db[index].name) == 0) {
                fprintf(stderr, "Interaction with %s detected.\n", db[i].name);
                return 0;
            }
        }
    }
    return 1;
}
