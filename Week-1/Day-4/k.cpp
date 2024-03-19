#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    bool ok= false;

    for (int i = 0; i * a <= c; ++i) {
        int remaining_damage = c - i * a;
        if (remaining_damage % b == 0) {
            ok= true;
            break;
        }
    }

    if (ok) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
