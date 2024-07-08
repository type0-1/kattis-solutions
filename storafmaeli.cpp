#include <iostream>
#include <string>

using namespace std;

string solve();


int main(){
    cout << solve() << endl;
    return 0;
}

string solve(){
    int x;
    cin >> x;
    
    if(x % 10 != 0){
        return "Neibb";
    }
    return "Jebb";
}