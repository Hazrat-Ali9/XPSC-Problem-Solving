/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1843/problem/B

#include<bits/stdc++.h>
using namespace std;
//......... macros.........
#define ull  unsigned long long
#define ll long long
#define ld double
#define pii pair<int,int>
#define F first
#define S  second
#define vi vector<int>
#define vii vector<pii>
#define vc vector
#define nl cout<<"\n"
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
// ........ constant.......
const ll inf=1e18;
const ll mod = 1000000007;
//.......global.........

void solve()
{
    ll n;
    cin>>n;
    vector<int>ar1(n);
    vector<int>ar2(n);
    for(int i=0; i<n; i++)
    {
        cin>>ar1[i];
        ar2[i]=abs(ar1[i]);

    }
    ll sum=0;
    for(auto i:ar2)sum+=i;


    int op=0;
    for(int i=0; i<n; i++)
    {
        if(ar1[i]<0)
        {
            int l=i;
            op++;
            while(l<n && ar1[l]<=0)
            {
                l++;
            }
            i = l-1;
        }
    }
    cout<<sum<<" "<<op<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
