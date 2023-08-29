#include <iostream>


using namespace std;

int main(void){
char letra = '0';
for(int i = 0 ; i < 10 ;i++){

cout << "Os caracteres numéricos tambem podem ser escritos como seu codigo numérico sendo eles:" << endl;
cout << letra << "--" << int(letra) + 1 << endl;
cout << endl;
}
return 0; 
}