#include <iostream>
#include <conio.h>

using namespace std;

int main() {
  // Declarar variables
  int n;

  // Solicitar al usuario que ingrese un número
  cout << "Ingrese un número: ";
  cin >> n;

  // Imprimir los patrones
  for (int i = 1; i <= n; i++) {
    // Imprimir el ala izquierda
    for (int j = i; j > 0; j--) {
      cout << j;
    }

    // Imprimir el espacio central
    if (i > 1) {
      cout << " ";
    }

    // Imprimir el ala derecha
    for (int j = 1; j <= i; j++) {
      cout << j;
    }

    // Imprimir una nueva línea
    cout << endl;
  }
_getch();
  return 0;
}
