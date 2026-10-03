#include <stdio.h>
#include <stdlib.h>
#include "drug_database.h"

int main() {
    Drug* db;
    init_drug_database(&db, 3);
    add_drug(&db, 0, (Drug){.name = "Amoxicillin", .dose = 10, .frequency = 3, .duration = 5});
    add_drug(&db, 1, (Drug){.name = "Ibuprofen", .dose = 20, .frequency = 4, .duration = 3});
    add_drug(&db, 2, (Drug){.name = "Paracetamol", .dose = 15, .frequency = 5, .duration = 7});
    print_drug_database(db, 3);
    free_drug_database(&db, 3);
    return 0;
}
