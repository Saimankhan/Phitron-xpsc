#include<bits/stdc++.h>
using namespace std;
const int n=101;
int main()
{ 
int s,t;
cin>>s>>t;
int count=0;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++){
for(int k=0;k<n;k++){
if(i+j+k<=s && i*j*k<=t)
{
count++;




}



}
}
}
cout << count<< endl;
return 0;
}