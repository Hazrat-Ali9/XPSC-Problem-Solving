/*

*/

///PROBLEM LINK -> https://www.codechef.com/problems/FIFTYPE
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
    if(n==0)
    {
        cout<<25<<endl;
        return;
    }
    if(n<=50)
    {
        ll def = 50-n;
        if(def%2==0)
        {
            cout<<def/2<<endl;
            return;
        }
        else
        {
            ll x1 = 53-n;
            cout<<x1/2 +1<<endl;
            return;
        }
    }
    if(n>50)
    {
        ll def = n-50;
        if(def%3==0)
        {
            cout<<def/3<<endl;
            return;
        }
        else
        {
            if((def+2)%3==0)
            {
                cout<<(def+2)/3 +1<<endl;
                return;
            }
            else{
                cout<<(def+1)/3 +3<<endl;
                return;
            }

        }

    }
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
