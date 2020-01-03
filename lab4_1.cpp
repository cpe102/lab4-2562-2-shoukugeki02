#include <iostream>
#include <cmath>
using namespace std;
double calculate(double X){
 return 3*pow(X,3)+2*2.73+pow(2,2*X+1)+sqrt(pow(X,2)+1);

}
int main(){
double X;
double Y;
cout << "Enter X\n";
cin >> X;
Y=calculate(X);
cout << Y;
return 0;
}

    