 #include <iostream>
 #include <stdio.h>

 using namespace std; //habilitando cout e cin 

int main(){

  double A;
  double doblo;
  double tiplo;

  cout <<" Digite valor de A\n";
  cin >> A;

  if( A >= 0){
    doblo = A * 2;
    cout << " O doblo de : " << A <<" é : " << doblo;
  } else{
    tiplo = A * 3;
    cout << " O tiplo de : " << A <<" é : " << tiplo;
  }
}