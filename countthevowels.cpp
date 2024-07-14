#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    int count = 0;

    string vowels = "aeiou";

    while(getline(cin, word)){
        for(int i = 0; i < word.length(); ++i){
            for(int j = 0; j < vowels.length(); ++j){
                if(tolower(word[i]) == vowels[j]){
                    count++;
                    break;
                }
            }  
        }
    }
    
    cout << count;
    return 0;
}