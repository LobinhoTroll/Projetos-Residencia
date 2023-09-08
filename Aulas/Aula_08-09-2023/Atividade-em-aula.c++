#include <iostream>
#include <vector>

std:: vector<float> notas;
char conf = 'S';
float nota;
float sum = 0;
int vtm;

using namespace std;

int main (){

while (conf == 'S')
{
    cout << "Informe a nota: ";
    cin >> nota;
    notas.push_back(nota);
    cout << endl;

    cout << "Deseja continuar? S/N: ";
    cin >> conf;
    cout << endl;
}

vtm = notas.size();

for (int i = 0; i < vtm; i++)
{
    sum += notas[i];
}


cout << "A média da turma é: " << sum/vtm;

return 0;

}