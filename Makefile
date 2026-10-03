# Makefile for the pediatric-icu-drug-calculator project

CFLAGS += -Wall -Wextra -Werror -std=c99

SOURCES := src/main.c src/drug_database.c src/dosage_calculator.c src/safety_validation.c src/patient_model.c
OBJECTS := $(SOURCES:.c=.o)

DRUG_DATABASE_TEST_OBJECTS := $(SOURCES:.c=.o) tests/test_drug_database.o
DOSAGE_CALCULATOR_TEST_OBJECTS := $(SOURCES:.c=.o) tests/test_dosage_calculator.o
SAFETY_VALIDATION_TEST_OBJECTS := $(SOURCES:.c=.o) tests/test_safety_validation.o

.PHONY: all clean test_drug_database test_dosage_calculator test_safety_validation

all: main

main: $(OBJECTS)
	gcc $(CFLAGS) -o $@ $(OBJECTS)

test_drug_database: $(DRUG_DATABASE_TEST_OBJECTS)
	gcc $(CFLAGS) -o test_drug_database $^ -lgtest -lgtest_main
	./test_drug_database

test_dosage_calculator: $(DOSAGE_CALCULATOR_TEST_OBJECTS)
	gcc $(CFLAGS) -o test_dosage_calculator $^ -lgtest -lgtest_main
	./test_dosage_calculator

test_safety_validation: $(SAFETY_VALIDATION_TEST_OBJECTS)
	gcc $(CFLAGS) -o test_safety_validation $^ -lgtest -lgtest_main
	./test_safety_validation

clean:
	rm -f main test_drug_database test_dosage_calculator test_safety_validation *.o
