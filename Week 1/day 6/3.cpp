#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int ar[n+1];
    int res =INT_MAX;
    for(int i=1; i<=n; i++)cin>>ar[i];
    for(int i=1; i<n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            res= min(ar[j]+ar[i]-i+j,res);
        }
    }
    cout<<res<<endl;

}
int main()
{

    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
