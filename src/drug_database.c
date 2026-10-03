#include "drug_database.h"

void init_drug_database(Drug** db, int size) {
    *db = (Drug*)malloc(size * sizeof(Drug));
    if (*db == NULL) {
        fprintf(stderr, "Memory allocation failed for drug database.");
        exit(EXIT_FAILURE);
    }
}

void add_drug(Drug** db, int index, Drug drug) {
    if (index < 0 || index >= (*db)->size) {
        fprintf(stderr, "Index out of bounds.");
        exit(EXIT_FAILURE);
    }
    db[index] = drug;
}

void remove_drug(Drug** db, int index) {
    if (index < 0 || index >= (*db)->size) {
        fprintf(stderr, "Index out of bounds.");
        exit(EXIT_FAILURE);
    }
    free(db[index]);
}

int find_drug(Drug* db, int size, const char* name) {
    for (int i = 0; i < size; i++) {
        if (strcmp(db[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

void print_drug_database(Drug* db, int size) {
    for (int i = 0; i < size; i++) {
        printf("%s, %f, %d, %f\n", db[i].name, db[i].dose, db[i].frequency, db[i].duration);
    }
}

void free_drug_database(Drug** db, int size) {
    for (int i = 0; i < size; i++) {
        free(db[i]);
    }
    free(*db);
}
