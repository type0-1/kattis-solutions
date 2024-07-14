#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    
    if(x == y){
        cout << x+1 << endl;
    }
    else if(x > y){
        while(y != x){
            cout << y+1 << endl;
            y++;
        }
        cout << y+1 << endl;
    }
    else{
        while(x != y){
            cout << x+1 << endl;
            x++;
        }
        cout << x+1 << endl;
    }
    return 0;
}