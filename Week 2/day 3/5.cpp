#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  n,k;
    cin>>n>>k;
    long long int ans=0;
    while(n<=k)
    {
        ans++;
        n+=n;
    }
    cout<<ans;
    return 0;
}
