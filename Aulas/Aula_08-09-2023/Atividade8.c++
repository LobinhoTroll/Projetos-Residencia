#include <iostream>

using namespace std;

int altura;

int main (){

cout << "Forneça a altura dos quadrados: ";
cin >> altura;
cout << endl;

cout << "Quadrado inteiro:\n";
cout << endl;

for (int coluna = 0; coluna < altura; coluna++){

    for(int linha = 0; linha < altura; linha++){
    cout << "* ";
    }
    cout << endl;

}

cout << endl;

cout << "Meio quadrado:\n";
cout << endl;

for (int coluna = 0; coluna < altura; coluna++){

    for(int linha = 0; linha <= coluna; linha++){
    cout << "* ";
    }
    cout << endl;

}

cout << endl;

cout << "Quadrado vazado:\n";
cout << endl;

for (int coluna = 1; coluna <= altura; coluna++){

    for(int linha = 1; linha <= altura; linha++){
    if (coluna == 1 || coluna == altura || linha == 1 || linha == altura)
    {
        cout << "* ";
    }
        else{
            cout << "  ";
        }

    }
    cout << endl;

}

cout << endl;

return 0;
}