#include <iostream>
#include <string>
#include <vector>
#include <regex>

using namespace std;

struct Data
{
    int dia;
    int mes;
    int ano;
    string data;
};



int main(){
regex validarData("^\\d{2}/\\d{2}/\\d{4}$");
string data;
   
    cin >> data; // string a ser separada
   if (regex_match(data,validarData)){
        cout << "Data valida" << endl;
   }else{
        cout << "Data invalida" << endl;
        }
}
