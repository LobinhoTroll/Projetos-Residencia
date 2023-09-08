#include <iostream>

using namespace std;

int numero;
int verificador = 0;

int main(){

cout << "Forneça um numero para verificar se é perfeito: ";
cin >> numero;

for (int i = 1; i < numero; i++)
{
    if (numero % i == 0)
    {
        verificador += i;
    }
}

if(verificador == numero){
    cout << "O numero fornecido é perfeito\n";
    }
        else{
            cout << "O numero não é perfeito \n";
        }

return 0;
}