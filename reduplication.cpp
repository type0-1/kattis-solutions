#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    int x;
    
    cin >> word;
    cin >> x;
    
    for(int i = 0; i < x; ++i){
        cout << word;
    }
    
    return 0;
}