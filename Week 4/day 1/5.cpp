// problem link >> https://www.codechef.com/problems/MOONSOON
#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void solve()
{
    long long int n,m,t;
    cin>>n>>m>>t;
    vector<long long int>ar(n);
    vector<long long int>ar2(m);
    long long int N = min(n,m);
    for( long long int i=0; i<n; i++)cin>>ar[i];
    for( long long int i=0; i<m; i++)
    {
        cin>>ar2[i];
        ar2[i] = ar2[i]*t;
    }
    long long int  ans=0;
    sort(ar.begin(), ar.end(), greater<int>());
    sort(ar2.begin(), ar2.end(), greater<int>());
    for(long long int i=0; i<N; i++)ans+=min(ar[i],ar2[i]);
    cout<<ans<<endl;
}
int main()
{
    Faster ;
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
