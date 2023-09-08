#include <iostream>

using namespace std;

int pos;
int num = 1;
int sum = 1;
int ant = 0;

int main (){

cout << "Forneça ate que posição a sequencia deve ser exibida:";
cin >> pos;

cout << endl;

for (int i = 0; i <= pos; i++)
{
    if (i < pos)
    {
        cout << sum << ",";
        sum = num + ant;
        ant = num;
        num = sum;
    }
        else{
            cout << sum << "...";
        }
          
return 0;
}



}