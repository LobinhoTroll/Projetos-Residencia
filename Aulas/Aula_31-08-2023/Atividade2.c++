#include <iostream>
#include<bits/stdc++.h>

using namespace std;

char char1;
char char2;
char char3;

int main(void){

cout << "Escreva um caractere:";
cin >> char1;

if (char1 >= 'A'&& 'Z'){

cout << "O caractere fornecido é uma letra maiuscula";

}

else(char1 >= 'a' && char1 <= 'b')
{

cout << "o caractere fornecido é uma letra minuscula" << endl; 

}

}