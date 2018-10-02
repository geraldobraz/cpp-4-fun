/*
Author: Geraldo Braz
State Machine with Pointers to Functions
*/

#include <stdio.h>


// Functions
    void f_s1_in2(char c){
    printf("%c",c);
    }

    void f_s2_in1(char c){
    printf("%c",c);
    }

    void f_s2_in3(char c){
    printf("/");
    printf("%c",c);
    }

// Enum
    typedef enum {
        state1 = 0, state2,state3,state4, MAX_STATE
    } states;

    typedef enum {
        in1 = 0, in2, in3, MAX_INPUT
    } inputs;



typedef void (*cb_t)(char);

cb_t machine[MAX_STATE][MAX_INPUT] = {
    0, f_s1_in2, f_s1_in2,
    f_s2_in1, 0, f_s2_in3,
    0, 0, 0,
    0, 0, 0
};


states next_state[MAX_STATE][MAX_INPUT] = {
    state2, state1, state1, 
    state2, state3, state1,
    state3, state4, state3,
    state1, state4, state3
};

states state  = state1;
// Main
int main(){
  inputs input;
  FILE* f;
  char buffer[3];
  char c;

  f = fopen("aux.c", "rt");
    while(fread(&c, 1,sizeof(char),f) == 1){
        if(c == '/'){
            input = in1;
        }
        else if(c == '*'){
            input = in2;
        }
        else{
            input = in3;
        }
        if(machine[state][input]){
            machine[state][input](c);
        }
        
        state = next_state[state][input];

    }

  
    return 0;
  
}
