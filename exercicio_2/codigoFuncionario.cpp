#include <iostream>
#include <stdio.h>

using namespace std; // habilitando cout e cin

int main() {

  int num;
  double salario;
  string nome;
  double salarioAtual;

  cout << "\n\nNome do funcionario.\n";
  cin >> nome;
  cout << "\n Informe salario.\nR$ ";
  cin >> salario;

  cout << " \n\n Escolha um numero referente ao código abaixo ";

  cout << " \n\nCódigo       Cargo     Percentual \n\n 1       Escriturário    "
          "    "
          "50%\n 2       Secretátio          35%\n 3       Caixa               "
          "20%\n "
          "4       Gerente             10%\n 5       Direto          Sem "
          "aumento\n\n";
  cin >> num;

  if (num == 1) {
    salarioAtual = (salario * 50) / 100;
    salarioAtual += salario;
    cout << " O " << nome
         << " de cargo Escriturário com o salario de: " << salario
         << " tera um almento de 50% seu salario atual é: R$ " << salarioAtual;
  } else if (num == 2) {
    salarioAtual = (salario * 35) / 100;
    salarioAtual += salario;
    cout << " O " << nome
         << " de cargo Secretário com o salario de: " << salario
         << " tera um almento de 35% seu salario atual é: R$ " << salarioAtual;
  } else if (num == 3) {
    salarioAtual = (salario * 20) / 100;
    salarioAtual += salario;
    cout << " O " << nome << " de cargo Caixa com o salario de: " << salario
         << " tera um almento de 20% seu salario atual é: R$ " << salarioAtual;
  } else if (num == 4) {
    salarioAtual = (salario * 10) / 100;
    salarioAtual += salario;
    cout << " O " << nome << " de cargo Gerente com o salario de: " << salario
         << " tera um almento de 10% seu salario atual é: R$ " << salarioAtual;
  } else if (num == 5) {
    salarioAtual += salario;
    cout << " O " << nome << " de cargo Gerente com o salario de: " << salario
         << " tera um almento de 0% seu salario atual é: R$ " << salarioAtual;
  }
}