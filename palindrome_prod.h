// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Computabilidad y Algoritmia
// 2º de Carrera
// Práctica 3: Números capicúa
// Referencia:
// https://github.com/fsande/CyA-P03-ProductosCapicua/blob/master/ProductosCapicua.md
// Autora: Antonella Sofía García Álvarez
// correo institucional: alu0101227610@ull.edu.es
// Archivo actual: fichero .h

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cmath>

//funciones que se utilizan en el código .cc
bool IsPalindrome(int);
void WritePalindrome(std::ofstream&, int);