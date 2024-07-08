#include <iostream>

using namespace std;

int main(){
    int v;
    int a;
    int t;
    
    cin >> v;
    cin >> a;
    cin >> t;
    
    double right = (0.5*a)*(t*t);
    double left = (v*t);
    cout << left + right << endl;
    return 0;
}