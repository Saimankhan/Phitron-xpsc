#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int m = -1; 
    
    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            m = i; 
            break; 
        }
    }
    
    cout << m << endl; 
    
    return 0;
}
