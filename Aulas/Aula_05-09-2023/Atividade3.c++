#include <iostream>

using namespace std;

int numero;

int main(){

cout << "Informe um o numero ao qual deseja saber os divisores: ";
cin >> numero;

for(int i = 1; i <= numero; i++){
    
    if(i == numero){
        cout << i << ".\n";
    }
    
    if(numero % i == 0 && i < numero){
        cout << i << ",";
    } 
}
return 0;
}