/*

*/

///PROBLEM LINK -> https://www.codechef.com/problems/DDMMORMMDD
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
    string s1="";
    string s2="";
    cin>>s;
    s1.push_back(s[0]);
    s1.push_back(s[1]);
    s2.push_back(s[3]);
    s2.push_back(s[4]);
    int n1,n2;
    n1=stoi(s1);
    n2=stoi(s2);
    if(n1>12)cout<<"DD/MM/YYYY\n";
    else if(n2>12)cout<<"MM/DD/YYYY\n";
    else if(n2>12)cout<<"MM/DD/YYYY\n";
    else cout<<"BOTH\n";
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
