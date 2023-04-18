 #include <iostream>
 #include <stdio.h>

 using namespace std; //habilitando cout e cin 

int main(){
  double n;
  double n2;
  double n3;
  double soma;

  cout <<" Digite valor de A\n";
  cin >> n;
  cout <<" Digite valor de B\n";
  cin >> n2;
  cout <<" Digite valor de C\n";
  cin >> n3;

  soma = n + n2;

  if(soma < n3){
    cout <<"O valor de A + B é :" << soma << " que é menor que C : " << n3;
  } else{
    cout <<"O valor de A + B é :" << soma << " que é maior que C : " << n3;
  }

}