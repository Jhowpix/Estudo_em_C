#include <iostream>
#include <stdio.h>

using namespace std; // habilitando cout e cin

int main() {

  float nota1;
  float nota2;
  float nota3;
  float media;

  cout << "  ESCOLA BARIZON HR \n\n ";

  cout << "\n Informe sua primeira nota. \n";
  cin >> nota1;

  cout << "\n Informe sua segunda nota. \n";
  cin >> nota2;

  cout << "\n Informe sua terceira nota. \n";
  cin >> nota3;

  media = (nota1 + nota2 + nota3) / 2;

  if (media <= 4.9) {
    cout << "\n\n Media: " << media << " Insuficiente";
  } else if (media <= 6.9) {
    cout << "\n\n Media: " << media << " Recuperaçao";
  } else if (media <= 8.9) {
    cout << "\n\n Media: " << media << " Bom";
  } else if (media <= 10) {
    cout << "\n\n Media: " << media << " Muito Bom";
  }
}
