#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {

    map<string, unsigned int> phone_book;
    unsigned int n,numero;
    string nome;

    cin >> n;
if(n >= 1 && n <= 100000){
     for(unsigned int i = 0; i < n; i++){
                cin >> nome >> numero;
                if(numero <= 99999999){
                    phone_book.insert(pair<string, unsigned int>(nome,numero));
                }
            }

            while(cin >> nome){
            if(phone_book.find(nome) != phone_book.end()){
                auto dados = phone_book.find(nome);
                cout << dados->first << "=" << dados->second << endl;
            }
            else{
                cout << "Not found" << endl;
            } 
                
            }
                

}


    return 0;
}