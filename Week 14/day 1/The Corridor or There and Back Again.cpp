/// link >> https://codeforces.com/contest/1872/submission/222390273
#include<bits/stdc++.h>
using namespace std;
void TEST_CASES()
{
    int n;
    cin>>n;
    int k=1e9;
    for(int i=1; i<=n; i++)
    {
        int a,b;
        cin>>a>>b;
        int now;
        if(b&1) now=a+b/2;
        else now=a+b/2 - 1;
        k=min(k,now);
    }
    cout<<k<<endl;
}
int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    cin>>t;
    while(t--)TEST_CASES();
    return 0;
}
