/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1674/problem/C

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
    string s1,s2;
    cin>>s1>>s2;
    bool a_in_s2 =false;
    bool def_in_s2 =false;
    for(auto i:s2)
    {
        if(i=='a')a_in_s2=true;
        else   def_in_s2 =true;
    }
    if(s2.size()==1 && a_in_s2) cout<<1<<endl;
    else if(a_in_s2)cout<<-1<<endl;
    else if(def_in_s2)cout<<setprecision(0)<<fixed<<pow(2,s1.size())<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
