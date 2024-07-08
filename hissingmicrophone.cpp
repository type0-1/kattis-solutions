#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    cin >> word;
    
    int i = 1;

    while(i < word.length()){
        if(word[i-1] == 's' && word[i] == 's'){
            cout << "hiss";
            return 0;
        }
        ++i;
    }
    
    cout << "no hiss";
    return 0;
}