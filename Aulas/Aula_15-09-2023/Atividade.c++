#include <iostream>
#include <vector>
#include <string>
#include <array>

using namespace std;

array horarios[5] ={"6:0","7:30","8:20","9:45","10:50"};
array viagem[5] = {};

struct passageiro {
    string nome;
    string idade;
    string cpf;
};

struct passagem{
    passageiro passageiro;
    string origem;
    string destino;
    string data;
};
struct viagem
{
    passagem passagem[40];
};


int main(){

viagem passagem[5][30]  

}