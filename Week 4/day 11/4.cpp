/*

*/

///PROBLEM LINK ->   https://codeforces.com/contest/1702/problem/D
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
    string s;
    ll n;
    cin>>s>>n;
    ll fre[26]= {0};
    ll len=s.size();
    ll total=0;
    for(ll i=0; i<len; i++)
    {
        fre[s[i]-'a']++;
        total+= s[i]-96;
    }
    ll gotta_remove = total - n;
    if(gotta_remove <=0)
    {
        cout<<s<<endl;
        return ;
    }
    for(ll i=25; i>=0; i--)
    {
        if(fre[i]!=0)
        {
            while(fre[i]!=0 && gotta_remove>0)
            {
                gotta_remove-=i+1;
                fre[i]--;
            }
            if(gotta_remove<=0)break;
        }
    }


    for(ll i=0; i<len; i++)
    {
        if(fre[s[i]-'a']>0)
        {
            cout<<s[i];
            fre[s[i]-'a']--;
        }
    }
    cout<<endl;
}

int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
