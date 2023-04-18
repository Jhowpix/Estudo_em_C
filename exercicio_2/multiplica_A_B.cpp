 #include <iostream>
 #include <stdio.h>

 using namespace std; //habilitando cout e cin 

int main(){
  double A;
  double B;
  double C;
  double mult;

  cout <<" Digite valor de A\n";
  cin >> A;
  cout <<" Digite valor de B\n";
  cin >> B;
  

  if(A == B){
    C = A + B;
    cout <<"O valor de A + B é : " << C;
  } else{
    C = A * B;
    cout <<"O valor de A X B é : " << C;
  }

}