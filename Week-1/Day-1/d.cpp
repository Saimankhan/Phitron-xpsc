#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int digit;
    int count=0;
    vector<int> v;
    while(n>0) {


        digit=n%10;
        n=n/10;
        count++;
        v.push_back(digit);






    }


    if(count==0) {
        cout << "0000" << endl;
    }

    else if(count==1)
    {
        cout<<"000";
        cout << v[0]<< endl;

    }

    else if(count==2)
    {
        cout << "00";
        cout << v[1]<<v[0];


    }
    else if(count==3)
    {
        cout << "0";
        cout<<v[2]<<v[1]<<v[0];

    }

    else
        cout<<v[3]<<v[2]<<v[1]<<v[0];



    return 0;
}
