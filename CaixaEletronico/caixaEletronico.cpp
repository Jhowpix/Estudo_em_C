#include <iostream>
#include <string>

using namespace std;
/* 
um caixa eletronico possui notas de 50, 20, 10
faca um programa que calcule quantas notas de cada deve 
ser fornecida para o cliente ao realizar um saque 
de um determinado valor
*/
int main() {

  int saldo = 0;
  int saque = 0;
  int deposito = 0;
  int notas = 0;
  int nota = 0;
  int value;

  // Eu sei que nao era bem assim mais, achei melhor praticar, desculpe!.

  // opcoes de um menu
  cout << "Escolha uma opçao\n 1. Saque\n 2. Deposito\n 3. Saldo\n 4. Sair\n\n"
          "Opçao: ";
  cin >> value;

  while (value != 4) {

    if (value == 1) {

      cout << "\n Saldo R$ " << saldo << "\n\nQual valor do saque R$"
           << "\n";
      cin >> saque;
      nota = saque;

      // contagem das notas
      while (nota >= 50) {
        nota = nota - 50;
        notas++;
      }

      cout << "Notas de 50 = " << notas << "\n";
      notas = 0;

      while (nota >= 20) {
        nota = nota - 20;
        notas++;
      }

      cout << "Notas de 20 = " << notas << "\n";
      notas = 0;

      while (nota >= 10) {
        nota = nota - 10;
        notas++;
      }

      cout << "Notas de 10 = " << notas << "\n";
      notas = 0;
      // fim da contagem das notas

      saldo -= saque;
      if (saldo < 0) {
        cout << "\n\nNao foi possivel realizar esta opçao.\n";
        saldo += saque;
      }
      cout << "\nValor do saque R$ " << saque << "\n\n Saldo atual R$ " << saldo
           << "\n\n";

    } else if (value == 2) {
      cout << "\nValor do deposito R$ ";
      cin >> deposito;
      saldo += deposito;
      cout << " Saldo atual é de R$ " << saldo << "\n\n";

    } else if (value == 3) {
      cout << "\n\nValor do saldo R$ " << saldo << "\n\n";
    }

    cout
        << "Escolha uma opçao\n 1. Saque\n 2. Deposito\n 3. Saldo\n 4. Sair\n\n"
           "Opçao: ";
    cin >> value;
  }

  cout << "\n\nObrigado por usar nossos serviços, mesmo sobre taxas e juros "
          "abusivos.";
}