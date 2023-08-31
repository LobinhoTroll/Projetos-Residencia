#include <iostream>


using namespace std;

int main(void){

cout << "Os caracteres numéricos tambem podem ser escritos como seu codigo numérico na tabela ASCII sendo eles:\n";

for(int i = '0'; i <= '9'; i++){

cout << char(i) << "--" << i << endl;

}
return 0; 
}