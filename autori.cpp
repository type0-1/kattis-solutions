#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    cin >> word;
    
    string result = string(1, word[0]);
    
    for(int i = 1; i < word.length(); ++i){
        if(word[i] == '-'){
            result += word[i+1];
        }   
    }
    
    cout << result;
    return 0;
}