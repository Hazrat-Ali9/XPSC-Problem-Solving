/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1675/problem/C


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
    cin>>s;
    if (s.size()==1 || s[0]=='0')
    {
        cout<<1<<endl;
        return;
    }
    bool all_qus = true;
    string s1="";
    ll n = s.size();
    s1.push_back(s[0]);
    ll last_one= -1;
    for(ll i=1; i<n; i++)
    {
        if(s1.back()!='0')s1.push_back(s[i]);
        else break;
        if(s[i]=='1')last_one=i;
        if(s[i]!='?')all_qus = false;
    }
    if(all_qus)
    {
        cout<<n<<endl;
        return ;
    }
    if (last_one!=-1 && s1.back()=='0')
    {
        if(last_one==0)
            cout<<s1.size()- last_one -1<<endl;
        else cout<<s1.size()- last_one <<endl;
        return ;
    }
    if (last_one==-1 && s1.back()=='0')
    {
        cout<<s1.size()<<endl;
        return ;
    }
    if(s1.back()== '1')
    {
        cout<<1<<endl;
        return ;
    }
    if (last_one!=-1 && s1.back()!='0')
    {
        cout<<s1.size()- last_one<<endl;
        return ;
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
