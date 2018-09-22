#include <iostream>
#include <fstream> 

using namespace std;


/* README
    This program use state machine to remove the comments of a .c code (aux.c).
*/
// States of the state machine
enum state{
    state1,
    state2,
    state3,
    state4
};


void showOutput(char c){
    
    cout << c;

}

int main(){
    // Creation of the variables
    int state = state1; // Initiate at the first state
    char c;

    //File
    fstream codeFile; 
    codeFile.open("aux.c");
    
    while(!codeFile.eof()){
        
        codeFile >> c;
        switch(state){
            case state1:
                if(c == '/'){
                    state = state2;
                }else{
                    showOutput(c);
                }
                break;
            case state2:
                if(c == '*'){
                    state = state3;
                }else if(c == '/'){
                    showOutput('/');
                }else if(c != '*'){
                    state = state1;
                    showOutput('/');
                    showOutput(c);
                }
                break;
            case state3:
                if(c == '*'){
                    state = state4;
                }else{
                    continue;
                }

                break;
            case state4:
                if(c == '/'){
                    state = state1;
                }else if(c!= '/' && c != '*'){
                    state = state3;
                }else if(c == '*'){
                    continue;
                }
                break;
            default:
                break;
        }        


    }

    codeFile.close();


    return 0;
}



