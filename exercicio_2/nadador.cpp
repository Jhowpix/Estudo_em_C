#include <iostream>
#include <stdio.h>

using namespace std; // habilitando cout e cin

int main() {

  string nome;
  int idade;

  cout << " Informe o nome do  nadador. \n";
  cin >> nome;
  cout << " Informe a idade do nadador. \n";
  cin >> idade;

  if (idade <= 7) {
    cout << "O " << nome << " vai para o: \n"
         << "Infantil A";
  } else if (idade <= 10) {
    cout << "O " << nome << " vai para o: \n"
         << "Infantil B";
  } else if (idade <= 13) {
    cout << "O " << nome << " vai para o: \n"
         << "Juvenil A";
  } else if (idade <= 17) {
    cout << "O " << nome << " vai para o: \n"
         << "Juvenil B";
  } else if (idade >= 18) {
    cout << "O " << nome << " vai para o: \n"
         << "Adulto";
  }
}