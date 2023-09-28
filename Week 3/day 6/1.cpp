
/*



*/

///PROBLEM LINK ->  https://codeforces.com/contest/1800/problem/A

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
    string s;
    cin>>s;
    for(int i=0; i<n; i++)s[i]=tolower(s[i]);
    int flag=1;
    if(n<4)
    {
        no;
        return;
    }
    if(s[0]!='m' || s[n-1]!='w')
    {

        no;
        return;
    }
    for(int i=0; i<n-1; i++)
    {
        if(s[i]=='m')
        {
            if(s[i+1]!='e' && s[i+1]!='m')
            {
                flag =0;
                break;
            }
        }
        else if (s[i]=='e')
        {
            if(s[i+1]!='o' && s[i+1]!='e')
            {
                flag =0;
                break;
            }
        }
        else if (s[i]=='o')
        {
            if(s[i+1]!='w' && s[i+1]!='o')
            {
                flag =0;
                break;
            }

        }
        else if (s[i]=='w')
        {
            if(s[i+1]!='w')
            {
                flag =0;
                break;
            }
        }
        else
        {
            flag =0;
            break;
        }
    }
    if(flag==1)yes;
    else no;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
