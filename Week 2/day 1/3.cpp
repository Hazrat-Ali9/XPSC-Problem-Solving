//   all problem have link from week 3 day 2

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(abs(n-m)>1 && abs(n-m)%2==0 ) cout<<"YES\n";
        else if(n-m ==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
