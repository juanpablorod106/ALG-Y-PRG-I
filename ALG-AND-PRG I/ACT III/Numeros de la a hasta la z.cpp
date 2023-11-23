#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  // Declarar una variable para almacenar la letra actual
  char letra = 'a';

  // Imprimir el abecedario
  for (letra = 'a'; letra <= 'z'; letra++) {
    cout << letra << " ";
  }
_getch();
  return 0;
}
