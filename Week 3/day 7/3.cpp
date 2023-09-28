
/*

*/

///PROBLEM LINK ->   https://codeforces.com/contest/1744/problem/C

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
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    int first_g=0;

    for(int i=0; i<n; i++)if(s[i]=='g')
        {
            first_g = i;
            break;
        }

    string s2="";
    for(int i=0; i<=first_g; i++)s2.push_back(s[i]);
    s+=s2;

    int ans =0;

   // cout<<s<<endl;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==c && c!='g')
        {
            int r=i+1;
            while(r<s.size())
            {
                if(s[r]=='g')
                {
                    ans = max(ans,r-i);
                    //cout<<i<<" "<<r<<endl;
                    break;
                }

                r++;
            }
            i=r;
        }


    }
    cout<<ans<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
