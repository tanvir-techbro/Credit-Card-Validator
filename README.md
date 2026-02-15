# Credit Card Validator (Luhn Algorithm)

A simple C++ console program that validates credit card numbers using the **Luhn algorithm**.

It accepts a card number (with or without spaces/dashes), cleans it, checks the length (13–16 digits), applies the Luhn doubling & checksum rules, and tells you whether the card number is **valid** or **invalid**.

## Features

- Reads input using `getline()` (handles spaces, dashes, extra characters)
- Cleans input → keeps only digits
- Validates length (13 to 16 digits)
- Implements Luhn algorithm correctly (doubling every second digit from the right)
- Gives clear valid/invalid result

## File Structure
```
Credit-Card-Validator/
├── main.cpp               # Entry point, input handling, cleaning, calls validation
├── verification.cpp       # Contains the luhn_algorithm() function
├── verification.h         # (optional) Header file with function declarations
├── README.md              # This file
└── LICENSE                # MIT license
```

## Requirements

- C++ compiler (g++ / clang++ / MSVC)
- C++11 or later (uses `std::vector`, `std::string`, range-based for, etc.)
- No external libraries — pure standard C++

## How to Clone and Run

### 1. Clone the repository

```bash
git clone https://github.com/tanvir-techbro/Credit-Card-Validator.git
cd Credit-Card-Validator
```

### 2. Compile
Using g++ (Linux/macOS/WSL):
```bash
g++ main.cpp verification.cpp -o card_validator
```
On Windows with MinGW/MSYS2:
```bash
g++ main.cpp verification.cpp -o card_validator.exe
```
### 3. Run the program
Linux / macOS / WSL:
```bash
./card_validator
```
Windows:
```bash
card_validator.exe
```

Feel free to contribute update and use.
