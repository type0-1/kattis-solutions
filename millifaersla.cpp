#include <iostream>
#include <string>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    
    cin >> a;
    cin >> b;
    cin >> c;
    
    if(a < b && a < c){
        cout << "Monnei";
    }
    else if(b < a && b < c){
        cout << "Fjee";
    }
    else if(c < a && c < b){
        cout << "Dolladollabilljoll";   
    }
    
    return 0;
}