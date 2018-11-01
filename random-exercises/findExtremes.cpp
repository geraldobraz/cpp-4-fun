#include <iostream> 
#include <vector>
using namespace std;

/* Using iterator 
int main(){
    int greater = 0;
    int smallest = 9999;

    int vet[10] = {-20, 34, 21,999, 0, 8, -322, -87, 92, 92};
    cout << "# Before" <<  endl << "Greater: " << greater << endl << "Smallest: " << smallest << endl;
    for(int i = 0; i < 10; i++){
        if (vet[i] >= greater){
            greater = vet[i];
        }else if(vet[i] <= smallest){
            smallest = vet[i];
        }else{
            continue;
        }
    }
    cout << "# After" <<  endl << "Greater: " << greater << endl << "Smallest: " << smallest << endl;
    return 0;
}
*/
// Using sorting
int main(){
    
    int numbers[] = {-20, 34, 21,999, 0, 8, -322, -87, 92, 92};
    vector<int> vet (numbers, numbers + sizeof(numbers)/sizeof(int));
    sort(vet.begin(),vet.end());
    cout << "# After" <<  endl << "Greater: " << vet[vet.size()-1]<< endl << "Smallest: " <<  vet[0]<< endl;

    return 0;
}
