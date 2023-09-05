#include <iostream>
#include <array>

using namespace std;

int main(){
char confirm = 'S';
int matr[]={};
int notaP[]={};
int notaS[]={};
int notaT[]={};
int i = 0;
int contador = 0;
while (confirm == 'S'){

cout << "Informe a matricula do aluno: ";
cin >> matr[i];
cout << endl;

cout << "Informe a nota do primeiro trimestre: ";
cin >> notaP[i];
cout << endl;

cout << "Informe a nota do segundo trimestre: ";
cin >> notaS[i];
cout << endl;

cout << "Informe a nota do terceiro trimestre: ";
cin >> notaT[i];
cout << endl;

cout << "repetição atual " << i;
cout << endl;

cout << "Deseja cadastrar mais um aluno? S/N: ";

cin  >> confirm; 
if(confirm == 'S'){
    i++;
    contador++;
}
cout << matr[0] << endl;
cout << matr[1] << endl;
cout << matr[2] << endl;
cout << endl;

}
cout << i;
for(int u = 0; u < i+1; u++){

    cout << "MATRICULA       NOTA1       NOTA2       NOTA3       MEDIA \n";
    cout << "========================================================= \n";
    cout << matr[u] << "----" << notaP[u] << "----" << notaS[u] << "----" << notaT[u]  << "----" << (notaP[u] + notaS[u] + notaT[u])/3 << endl;

}

}