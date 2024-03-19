#include <bits/stdc++.h>
using namespace std;
int main() {

    int a,b;
    cin>>a>>b;
    int sum;
    if(a==b) {
        sum=a+b;
        cout << sum << endl;
    }
    else if(a-1>=b) {
        sum=2*a-1;
        cout<<sum<<endl;
    }
    else
    {
        sum=2*b-1;
        cout<<sum<<endl;





    }




    return 0;
}
