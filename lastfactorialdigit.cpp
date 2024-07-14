#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    
    for(int i = 0; i < x; ++i){
        int y;
        cin >> y;
        long long fact = 1;
        while(y != 1){
            fact = fact * y;
            y--;
        }
        cout << fact%10 << endl;
        
    }
    return 0;
}