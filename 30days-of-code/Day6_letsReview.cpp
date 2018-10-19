#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int T;
    string S;
	string even,odd;
    
    
    cin >> T;

    if(T <=10 && T>= 1){
        for(int i = 0; i < T; i++){
            cin >> S;
            for(int j = 0; j < S.size(); j++){
                if(j%2 == 0 ){
                    even.push_back(S[j]);
                }
                else{
                    odd.push_back(S[j]);
                }
                
            }
            // even+="\0";
            // odd+="\0";
            for (int x = 0; x < even.size() ; x++) {
            	cout << even[x];
            }
            cout << " ";
            for (int y = 0; y < odd.size() ; y++) {
            	cout << odd[y];
            }
            cout<< endl;
            even.clear();
            odd.clear();

        }

    }


    return 0;
}

