#include <iostream>
#include <string>

using namespace std;

int main(){
    int x;
    cin >> x;
    string word1;
    cin >> word1;
    
    if(x == 2){
        string word2;
        cin >> word2;
        cout << "blandad best";
    }
    if(x == 1){
        cout << word1;
    }
    return 0;
}