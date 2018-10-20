#include <string>
#include <iostream>

using namespace std;


// Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.

string replace(const string s)
{
    string outString;
    outString.clear();
    bool isLowercaseVowel = (!s.compare("a") || !s.compare("e") || s.compare("i") || !s.compare("o") || !s.compare("u"));
    // bool isUppercaseVowel = (s.compare("A") || s.compare("E") || s.compare("I") || s.compare("O") || s.compare("U"));

    for (int i = 0 ; i < s.size() ; i++){
        if (isLowercaseVowel){
            outString.push_back('!');
        }else{
            cout << "S: "<< s[i] << endl;
            outString.push_back(s[i]);
        }
    }
    
    return outString; 
}

int main(){

    cout << replace("Hi!") << endl;
    

return 0;    
}