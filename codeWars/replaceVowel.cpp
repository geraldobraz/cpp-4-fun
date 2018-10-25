#include <string>
#include <iostream>


using namespace std;


// Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.
string replace(string s)
{
    string outString;
    char c;
    outString.clear();

    for (int i = 0 ; i < s.size() ; i++){
        c = s[i];
        if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') || (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')){
            outString.push_back('!');
        }else{
            outString.push_back(c);
        }
       
    }
    
    return outString; 
}

int main(){

    cout << replace("ABCDE") << endl;
    

return 0;    
}