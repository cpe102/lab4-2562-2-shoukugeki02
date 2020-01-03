#include<iostream>
#include<cmath>

using namespace std;
double findDisance(double U,double A,double T){
 return U*T+0.5*A*pow(T,2);
}




int main(){
double U;
double A;
double T;
double S;
cout << "Enter U\n";
cin >> U;
cout << "Enter A\n";
cin >> A;
cout << "Enter T\n";
cin >> T;
S=findDisance(U,A,T);
cout << S;


  

  return 0;
}
