#include<iostream>
#include<cmath>
using namespace std;
int findDivisor(int X){
int Z=2;
while (X % Z != 0){
Z=Z+1;
 }
return Z;
}
int main(){
     int X;
     int Y;
    cout << "Enter X\n";
    cin >> X;
    Y=findDivisor(X);
    cout << Y;

   return 0;
}



