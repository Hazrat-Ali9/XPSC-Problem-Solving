#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,m,x,i;
cin>>t;
while(t--){
cin>>m,x=1;
for(i=2;i<=sqrt(m);i++)
if(m%i==0)
{
x=m/i;
break;
}
cout<<x<<" "<<m-x<<endl;
}
return 0;
}