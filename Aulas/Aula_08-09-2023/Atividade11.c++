#include <iostream>
#include <cmath>
using namespace std;

int snum;
int num;
int numbreak[3];

int main(){

cout << "Forneça um numero inteiro:";
cin >> snum;

cout << snum / 100 << endl;
numbreak[0] = snum / 100;

num = snum % 100;
cout << num / 10 << endl;    
numbreak[1] = num / 10;

cout << num % 10 << endl;
numbreak[2] = num % 10;


cout << "N1 == " << numbreak[0] << " N2 == " << numbreak[1] << " N3 == " << numbreak[2] << endl;
cout << pow(numbreak[0],3) << "   " << pow(numbreak[1],3) << "   " << pow(numbreak[2],3) << "   " << (pow(numbreak[0],3) + pow(numbreak[1],3) + pow(numbreak[2],3)) << endl;

if ((pow(numbreak[0],3) + pow(numbreak[1],3) + pow(numbreak[2],3)) == snum)
{
    cout << "O numero é perfeito.\n" ;
}
    else{
        cout << "O numero não é perfeito.\n";
    }

return 0;
}
