#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n+1];
        for(int i=1; i<=n; i++)cin>>a[i];
        int ans=0;
        for(int i=1; i<=n; i++)
            if(ans+i<a[i])
                ans+=a[i]-(i+ans);
        cout<<ans<<endl;
    }
    return 0;
}
