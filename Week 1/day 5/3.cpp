#include<bits/stdc++.h>
using namespace std;
long long int  fac(int num)
{
    if(num ==0 || num==1)return 1;

    return num*fac(num-1);
}
void solve()
{
    int n;
    cin>>n;
    cout<<fac(n)<<endl;

}
int main()
{

    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
