# Pediatric ICU Drug Calculator

## Overview

This is a C-based system for calculating and validating drug dosages for pediatric ICU patients. The system is modular and includes modules for drug database management, dosage calculation, safety validation, and patient modeling. Data integrity and error checking are ensured through rigorous practices.

## Usage

### Compilation

1. Ensure you have a C compiler installed (e.g., `gcc`).
2. Navigate to the project directory.
3. Run `make` to compile the system.

### Running

1. Run `./main` to start the system.
2. The system will output the calculated dosage and validate drug interactions.

### Cleanup

Run `make clean` to remove object files and compiled binaries.

## Modules

### Drug Database Management
- `include/drug_database.h`: Provides functions to manage a drug database.
- `src/drug_database.c`: Implements the drug database management functions.

### Dosage Calculation
- `include/dosage_calculator.h`: Provides functions for calculating drug dosages.
- `src/dosage_calculator.c`: Implements the dosage calculation functions.

### Safety Validation
- `include/safety_validation.h`: Provides functions for validating drug interactions.
- `src/safety_validation.c`: Implements the safety validation functions.

### Patient Modeling
- `include/patient_model.h`: Provides functions for modeling patient information.
- `src/patient_model.c`: Implements the patient modeling functions.

### Main System
- `include/main.h`: Defines the main system functions.
- `src/main.c`: Implements the main system.

### Testing
- `tests/test_drug_database.c`: Tests the drug database management functions.
- `tests/test_dosage_calculator.c`: Tests the dosage calculation functions.
- `tests/test_safety_validation.c`: Tests the safety validation functions.

## Contributing

Contributions are welcome. For more information, see the contributing guidelines.

## License

This project is licensed under the MIT License. See the LICENSE file for details.