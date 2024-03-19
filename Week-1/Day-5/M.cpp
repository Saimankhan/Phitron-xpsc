#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,sum=0,cnt=0;
    cin>>n;
    vector<ll>v;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if(x%2==1) {
            v.push_back(x);
            cnt++;
        }
        else sum+=x;
    }
    sort(v.begin(),v.end(),greater<ll>());
    if(cnt%2==1) cnt--;
    for(int i=0; i<cnt; i++) sum+=v[i];
    cout<<sum<<endl;

}
