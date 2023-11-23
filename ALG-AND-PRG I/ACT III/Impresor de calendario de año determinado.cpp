#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

// Función para calcular el número de días de un mes
int num_dias_mes(int mes, int anio) {
  int num_dias = 0;
  switch (mes) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      num_dias = 31;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      num_dias = 30;
      break;
    case 2:
      if (anio % 4 == 0) {
        num_dias = 29;
      } else {
        num_dias = 28;
      }
      break;
  }
  return num_dias;
}

// Función para imprimir el calendario de un mes
void imprimir_calendario_mes(int mes, int anio) {
  // Imprimir el encabezado del mes
  cout << endl;
  cout << setw(30) << left << "Mes " << mes << " de " << anio << endl;
  cout << endl;

  // Imprimir los días del mes
  int dia_semana = 1;
  for (int dia = 1; dia <= num_dias_mes(mes, anio); dia++) {
    cout << setw(2) << right << dia;

    // Cambiar de línea al final de cada semana
    if (dia_semana % 7 == 0) {
      cout << endl;
    }
    dia_semana++;
  }

  // Imprimir una línea en blanco después de cada mes
  cout << endl;
}

int main() {
  // Solicitar al usuario que ingrese el año
  int anio;
  cout << "Ingrese el año: ";
  cin >> anio;

  // Imprimir el calendario del año
  for (int mes = 1; mes <= 12; mes++) {
    imprimir_calendario_mes(mes, anio);
  }
_getch();
  return 0;
}
