
///PROBLEM LINK ->  https://codeforces.com/contest/1676/problem/E

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
    ll n,q;
    cin>>n>>q;
    vector<ll>num,qu;
    vector<ll>pre(n);
    vector<ll>su(n);
    ll x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        num.push_back(x);
    }
    for(int i=0; i<q; i++)
    {
        cin>>x;
        qu.push_back(x);
    }
    sort(num.begin(),num.end());

    su[0]=num[n-1];
    for(int i=1; i<n; i++)su[i]=su[i-1]+num[n-i-1];

    for(auto i:qu)
    {
        if(i>su[su.size()-1])
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            int l=0;
            int r=n-1;
            int indx=-1;
            while(l<=r)
            {
                int mid = l+ (r-l)/2;
                if(su[mid]>=i)
                {
                    indx= mid;
                    r=mid-1;

                }
                else l=mid+1;
            }
            cout<<indx+1<<endl;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;

}
