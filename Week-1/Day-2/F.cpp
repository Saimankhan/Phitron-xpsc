#include <iostream>
using namespace std;

int main() {
    int a, b, t;
    cin >> a >> b >> t;
    float nT = t + 0.5;
    int c = nT / a;
    cout << c * b << endl;

    return 0;
}
