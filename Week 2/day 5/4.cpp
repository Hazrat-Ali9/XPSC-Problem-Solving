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

bool solve(int n)
{
    string s= to_string(n);
    for(int i=0; i<s.size()-1; i++)
    {
        for(int j=i+1; j<s.size(); j++)if(s[i]==s[j])return false;
    }
    return true;
}
int main()
{
    Faster ;
    ll y = 1;
    cin>>y;
    for(ll i=y+1; i<=1e9; i++)
    {
        if(solve(i))
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}
