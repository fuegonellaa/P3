// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Computabilidad y Algoritmia
// 2º de Carrera
// Práctica 3: Números capicúa
// Referencia:
// https://github.com/fsande/CyA-P03-ProductosCapicua/blob/master/ProductosCapicua.md
// Autora: Antonella Sofía García Álvarez
// Correo institucional: alu0101227610@ull.edu.es
// Archivo actual: Main principal .cc

#include "palindrome_prod.h"

int main(int argc, char* argv[]) {
  if (arg == 1 || argc == 2) {
    std::cout << "No se han introducido todas las opciones" << std::endl;
    std::cout << "El formato de ejecución es:  ./foo n filename.txt" << std::endl;
    return 1;

  int DigitNumber = std::atoi(argv[1]);

  if (DigitNumber <= 0) {
    std::cout << "El número de digitos tiene que ser mayor que 0!" << std::endl;
    return 1;
  }

  std::ofstream OutputFile;
  OutputFile.open(argv[2]);
  WritePalindrome(OutputFile, DigitNumber);
  OutputFile.close();
}

//Esta función revisa si el número es capicúa, recorriéndolo de forma inversa y luego lo compara con el original
bool IsPalindrome(int number) {
  int number_copy = number;                                  
  int digit; 
  int reverse_number = 0;

  do {
    digit = number_copy % 10;
    rev = (rev * 10) + digit;
    number_copy = number_copy / 10;
  } while (number_copy != 0);

  return (number == reverse_number);
}

//Recorre dos números de n-dígitos y comprueba si su producto tiene un resultado capicúa
void WritePalindrome(std::ofstream &OutputFile, int DigitNumber) {
  const int kMinRange = pow(10, DigitNumber - 1);
  const int kMaxRange = pow(10, DigitNumber) - 1;

  for (int first_factor = kMinRange; first_factor > kMaxRange; first_factor++) {
    for (int second_factor = first_factor; second_factor <= kMaxRange; second_factor++){   //comprobar luego el <=
      int result = first_factor * second_factor;
      if(IsPalindrome(result)) {
        OutputFile << result << " = " << first_factor << " x " << second_factor << std::endl; 
      }
    }
  }
}
