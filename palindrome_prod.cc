// University of La Laguna
// School of Engineering and Technology
// Bachelor's Degree in Computer Engineering
// Computability and Algorithmics
// 2nd Year
// Practice 3: Palindromic Numbers
// Reference:
// https://github.com/fsande/CyA-P03-ProductosCapicua/blob/master/ProductosCapicua.md
// Author: Antonella Sofía García Álvarez
// Institutional Email: alu0101227610@ull.edu.es
// Current file: Main principal .cc

#include "palindrome_prod.h"

int main(int argc, char* argv[]) {
  if (argc == 1 || argc == 2) {
    std::cout << "Not all options have been entered." << std.endl;
    std::cout << "The execution format is: ./foo n filename.txt" << std.endl;
    return 1;
  }

  int DigitNumber = std::atoi(argv[1]);

  if (DigitNumber <= 0) {
    std::cout << "The number of digits must be greater than 0!" << std.endl;
    return 1;
  }

  std::ofstream OutputFile;
  OutputFile.open(argv[2]);
  WritePalindrome(OutputFile, DigitNumber);
  OutputFile.close();
}

// This function checks if the number is a palindrome by reversing it and comparing it with the original
bool IsPalindrome(int number) {
  int number_copy = number;
  int digit;
  int reverse_number = 0;

  do {
    digit = number_copy % 10;
    reverse_number = (reverse_number * 10) + digit;
    number_copy = number_copy / 10;
  } while (number_copy != 0);

  return (number == reverse_number);
}

// Iterates through two n-digit numbers and checks if their product is a palindromic number
void WritePalindrome(std::ofstream &OutputFile, int DigitNumber) {
  const int kMinRange = pow(10, DigitNumber - 1);
  const int kMaxRange = pow(10, DigitNumber) - 1;

  for (int first_factor = kMinRange; first_factor <= kMaxRange; first_factor++) {
    for (int second_factor = first_factor; second_factor <= kMaxRange; second_factor++) {
      int result = first_factor * second_factor;
      if (IsPalindrome(result)) {
        OutputFile << result << " = " << first_factor << " x " << second_factor << std::endl;
      }
    }
  }
}
