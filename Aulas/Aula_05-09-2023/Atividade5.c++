#include <iostream>
#include <ctime>

using namespace std;

int main(){

char confirm = 'S';
while (confirm == 'S'){
int numero;
srand(time(0));
int aleatorio = rand()%100;
cout << "Tente adivinhar o numero que foi gerado entre 0 e 100! \n";

int i = 1;
while (aleatorio != numero){
cout << i <<"°" << " tentativa: ";
cin >> numero;

if(aleatorio > numero){
        cout << "Está mais acima \n";
}
    else if(aleatorio < numero){
        cout << "Está mais abaixo \n";
        }
if(aleatorio != numero){
    i++;
}
cout << endl;
}
cout << "Parabens a resposta era " << aleatorio << " voçê acertou depois de " << i << " tentativas! \n";
cout << endl;
cout << "Deseja jogar novamente? digite S/N: ";
cin >> confirm;
}
return 0;
}