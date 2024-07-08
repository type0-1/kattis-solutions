#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    cin >> word;
    
    for(int i = 0; i < 3; ++i){
        if(word[i] != '5'){
            cout << 0;
            return 0;
        }
    }
    
    cout << 1;
    return 0;
}