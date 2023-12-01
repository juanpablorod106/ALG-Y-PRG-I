#include <iostream>
#include <conio.h>

using namespace std;

// Función para ordenar un arreglo mediante el método de inserción
void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;

    // Mientras que el elemento actual sea menor que el elemento anterior
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }

    // Colocar el elemento actual en su posición correcta
    arr[j + 1] = key;
  }
}

int main() {
  // Declarar el arreglo
  int arr[100];

  // Solicitar al usuario la cantidad de elementos del arreglo
  int n;
  cout << "Ingrese la cantidad de elementos del arreglo: ";
  cin >> n;

  // Ingresar los elementos del arreglo
  for (int i = 0; i < n; i++) {
    cout << "Ingrese el elemento " << i + 1 << ": ";
    cin >> arr[i];
  }

  // Ordenar el arreglo
  insertionSort(arr, n);

  // Imprimir el arreglo ordenado
  cout << "Arreglo ordenado: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
