#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    cin >> word;

    cout << word[0];
    for(int i = 0; i < word.length()*2-4; ++i){
        cout << 'e';
    }
    cout << word[word.length()-1] << endl;
    return 0;
}