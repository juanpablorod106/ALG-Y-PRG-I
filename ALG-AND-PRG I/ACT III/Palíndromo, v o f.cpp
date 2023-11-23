#include <iostream>
#include <conio.h>
using namespace std;

bool es_palindromo(string palabra) {
  // Declarar variables
  int i = 0;
  int j = palabra.size() - 1;

  // Iterar sobre la palabra
  while (i < j) {
    // Si los caracteres en las posiciones i y j no son iguales
    if (palabra[i] != palabra[j]) {
      // La palabra no es un palíndromo
      return false;
    }

    // Incrementar i y decrementar j
    i++;
    j--;
  }

  // La palabra es un palíndromo
  return true;
}

int main() {
  // Declarar variables
  string palabra;

  // Solicitar al usuario que ingrese una palabra
  cout << "Ingrese una palabra: ";
  cin >> palabra;

  // Determinar si la palabra es un palíndromo
  if (es_palindromo(palabra)) {
    // La palabra es un palíndromo real
    cout << palabra << " es un palíndromo real." << endl;
  } else {
    // La palabra es un palíndromo falso
    cout << palabra << " es un palíndromo falso." << endl;
  }
_getch();
  return 0;
}
