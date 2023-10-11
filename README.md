# Palindromic Numbers

This C++ program, developed as part of the "Computability and Algorithmics" course at the Escuela Superior de Ingeniería y Tecnología, Universidad de La Laguna, is designed to find and write palindromic numbers that result from the product of two n-digit numbers.

## Table of Contents

- [About](#about)
- [Usage](#usage)
- [Author](#author)

## About

This program takes an integer `n` as input, representing the number of digits for two factors. It then calculates and writes to a file all the palindromic numbers that result from the product of two n-digit numbers.

## Usage

To use the program, follow these steps:

1. Compile the code:

   ```shell
   g++ Main_principal.cc -o PalindromicNumbers
   ```
2. Run the program by providing two command-line arguments:

The first argument is n, the number of digits for the factors.
The second argument is the name of the output file where the palindromic numbers will be written.
For example:
  ```shell
  ./PalindromicNumbers 3 output.txt
  ```
This command will find and write all palindromic numbers resulting from the product of two 3-digit numbers to the output.txt file.

## Author
* Author: Antonella Sofía García Álvarez
* Institutional Email: alu0101227610@ull.edu.es
* 
This program is developed as part of an academic project for the "Computability and Algorithmics" course at Universidad de La Laguna.

Please feel free to contribute, report issues, or provide feedback on the GitHub repository.
