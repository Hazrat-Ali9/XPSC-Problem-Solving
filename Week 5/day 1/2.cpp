/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1618/problem/B

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
    cin.ignore();
    string s,s1="";
    getline(cin,s);
    if(s.size()==2)
    {
        cout<<s<<'a'<<endl;
        return;
    }
    for(auto i:s)if(i!=' ')s1.push_back(i);
    int  flag = 0;
    ll mis=-1;
    for(ll i=1; i<s1.size(); i+=2)
    {
        if(i+1<s1.size()  && s1[i]!=s1[i+1])
        {
            flag=1;
            mis=i;
            break;
        }

    }

    if(flag==1)
    {
        for(ll i=0; i<s1.size(); i++)
        {
            if(i%2==0)cout<<s1[i];
            if(i+1 == mis)cout<<s1[mis];
            if(i+1 == s1.size()-1)cout<<s1.back();
        }
        cout<<endl;
    }
    if(flag==0)
    {
        s="";
        for(ll i=0; i<s1.size()-2; i++)if(i%2==0)s.push_back(s1[i]);
        s.push_back(s1[s1.size()-2]);
        s.push_back(s1[s1.size()-1]);
        s.push_back(s1.back());
        cout<<s<<endl;
    }
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;;
    int n;
    while(t--)solve();
    return 0;
}
