#include <iostream>

using namespace std;

int altura;
char l = 'A';

int main(){

cout << "Forneça a altura da torre de letras: ";
cin >> altura;

for (int i = 0; i < altura; i++){

    for(int j = 0; j < i; j++){
    cout << l;
    l++;
    }
    cout << endl;

}
return 0;
}