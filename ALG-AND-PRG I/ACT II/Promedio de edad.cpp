#include <iostream>
#include <conio.h>

using namespace std;

int main() {
  // Declaramos las variables para almacenar las notas
  double nota1, nota2, nota3;

  // Solicitamos las notas al usuario
  cout << "Ingrese la primera nota: ";
  cin >> nota1;
  cout << "Ingrese la segunda nota: ";
  cin >> nota2;
  cout << "Ingrese la tercera nota: ";
  cin >> nota3;

  // Calculamos el promedio
  double promedio = (nota1 + nota2 + nota3) / 3;

  // Imprimimos el promedio
  cout << "El promedio es: " << promedio << endl;

  // Solicitamos al usuario que presione una tecla para continuar
  cout << "Gracias por su tiempo Prof. Andrea";
  _getch();

  return 0;
}

