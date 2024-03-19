#include<bits/stdc++.h>
#define ll long long int
using namespace std ;
int main()
{
ll x,y;
cin>>x>>y;
ll l=0;
ll sum=x;

while(sum<=y){
sum=sum*2;
l++;
}

cout << l << endl;
return 0;
}