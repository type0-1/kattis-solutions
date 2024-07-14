#include <iostream>
#include <string>
using namespace std;

int main(){

    string word;
    cin >> word;

    for(int i = 0; i < word.length(); ++i){
        if(word[i] == 'a'){
            cout << word[i];
            for(int j = i+1; j < word.length(); ++j){
                cout << word[j];
            }
            break;
        }
    }
    
    return 0;
}