#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

#define MAX 20

struct articulo {
  char codigo[9];
  char producto[MAX];
  float precio;
};

void ingresar_articulo(articulo *a) {
  cout << "Ingrese el código del artículo: ";
  cin >> a->codigo;

  cout << "Ingrese el nombre del artículo: ";
  cin >> a->producto;

  cout << "Ingrese el precio del artículo: ";
  cin >> a->precio;
}

void mostrar_articulo(articulo *a) {
  cout << "Código: " << a->codigo << endl;
  cout << "Producto: " << a->producto << endl;
  cout << "Precio: " << a->precio << endl;
}

void ordenar_articulos(articulo *a, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i].precio > a[j].precio) {
        articulo temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}

int main() {
  int n;
  cout << "Ingrese la cantidad de artículos: ";
  cin >> n;

  articulo *a = new articulo[n];

  for (int i = 0; i < n; i++) {
    ingresar_articulo(&a[i]);
  }

  ordenar_articulos(a, n);

  for (int i = 0; i < n; i++) {
    mostrar_articulo(&a[i]);
  }

  delete[] a;
  _getch();
  return 0;
}
