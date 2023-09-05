#include <iostream>

using namespace std;

int main(){
for(int num = 1; num < 100; num++){
    int verif = 0; 
     for(int div = 1; div < 100; div++)
     {
        if(num % div == 0)
        {
            verif += 1;
        }            
     }
            if(verif == 2)
            {
                cout << num << endl;
            }    
}
return 0;
}