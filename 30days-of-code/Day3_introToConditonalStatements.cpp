#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(N>=0 && N<=100){
        if(N%2 == 0){
            if(N<=5 && N>=2){
                cout << "Not Weird"<<endl;
            }
            else if(N<=20 && N>=6){
                cout << "Weird"<<endl;
            }
            else if(N>20){
                cout << "Not Weird"<<endl;
            }
    }
    else{
        cout << "Weird"<<endl;
    } 
        
    }


    return 0;
}
