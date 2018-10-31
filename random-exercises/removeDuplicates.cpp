#include <iostream>
#include <vector>

using namespace std;


int main(){
    int numbers[] = {2,1,5,3,4,2,6};
    vector<int> vet(numbers,numbers + sizeof(numbers) / sizeof(int));
    sort(vet.begin(),vet.end());
    vector <int> result (0); 
    result.push_back(vet[0]);
    int c = vet[0];
    int previous = c;
    

    for(int i = 1; i < vet.size(); i++){
        if(c !=  vet[i]){
            result.push_back(vet[i]);
        }
        c = vet[i];
    }

// Printing the result
    for (int i = 0; i < result.size(); i++){
        cout<< result[i];
    }
    cout << endl;

    return 0;
}