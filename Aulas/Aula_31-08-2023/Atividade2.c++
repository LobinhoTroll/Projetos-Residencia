#include <iostream>
#include <bits/stdc++.h>

using namespace std;

char char1;

int main(void){

cout << "Escreva um caractere: ";
cin >> char1;

if(char1 >= 'A' &&  char1 <= 'Z'){
        cout << "o caractere fornecido é uma letra maiuscula \n" << endl; 
}
    else if(char1 >= 'a' && char1 <= 'z'){
            cout << "O caractere fornecido é uma letra minuscula \n";
}

        else{
                cout << "O caractere fornecido não é uma letra \n" << endl; 

}

cout << "codigo de a -- " << int('a') << endl;
cout << "codigo de z -- " << int('z') << endl;
cout << "codigo de A -- " << int('A') << endl;
cout << "codigo de Z -- " << int('Z') << endl;

}