#include <iostream>
#include <list>

using namespace std;

int main(){
    int length = 0;

    // Creating the Linked List
    list <int> linkedList;
    for (int i; i < 10; i++){
        linkedList.push_back(i);
    }

    list <int> :: iterator current =  linkedList.begin(); 
    list <int> :: iterator middle =  linkedList.begin(); 
    
    while(current != linkedList.end()){
        length++;
        if (length%2 == 0){
            middle++;
        }
        current++;
    }

    if (length%2 == 1){
        middle++;
    }
    
    
    cout << "Length: " << length << endl;
    cout << "Middle: " << *middle << endl;
    return 0;
}