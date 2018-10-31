#include <iostream>
#include <vector>

using namespace std;


int main(){
    
    int vet [] = {1,2,3,5};
    int soma1= 0, soma2= 0;

    for(int i = 0; i < 4; i++){
        soma1 += vet[i];
    }
    soma2 = (5*(5+1))/2;
    cout << "-> O numero que falta é: " << (soma2-soma1) <<endl;


    

    return 0;
}