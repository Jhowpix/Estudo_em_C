#include <iostream>
#include <stdio.h>

using namespace std; // habilitando cout e cin

int main() {

  string nome;
  double salario;
  int tempoDeTrabalho;
  double salarioAtual;

  cout << " Infome nome do funcionario. \n";
  cin >> nome;
  cout << "\n Informe salario. \n";
  cin >> salario;
  cout << "\n Infome quantos anos este funcionario tem de empresa. \n\n\n";
  cin >> tempoDeTrabalho;

  if (tempoDeTrabalho < 10) {
    salarioAtual = (salario * 30) / 100;
    salarioAtual += salario;
    cout << "\n O funcionario: \n " << nome << " com o salario  de: " << salario
         << " tera um reajuste de 30% \n "
         << "Salario atual será: " << salarioAtual;
  } else {
    salarioAtual = (salario * 37.5) / 100;
    salarioAtual += salario;
    cout << "\n O funcionario: \n " << nome << " com o salario  de: " << salario
         << " tera um reajuste de 37,5% \n "
         << "Salario atual será: " << salarioAtual;
  }
}