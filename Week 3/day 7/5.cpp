
/*

*/

///PROBLEM LINK ->   https://codeforces.com/contest/1741/problem/A

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

    int x1 =1;
    int x2 =1;
    int m1=1,m2=1;

    cin>>s1>>s2;


    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]=='X')x1++;
        else if(s1[i]=='L')m1=2;
        else if(s1[i]=='M')m1=1;
        else if(s1[i]=='S')m1=-1;
    }

    for(int i=0; i<s2.size(); i++)
    {
        if(s2[i]=='X')x2++;
        else if(s2[i]=='L')m2=2;
        else if(s2[i]=='M')m2=1;
        else if(s2[i]=='S')m2=-1;
    }

    int sz1  = x1*m1;
    int sz2  = x2*m2;

    if(sz1<sz2)cout<<'<'<<endl;
    else if(sz1==sz2)cout<<'='<<endl;

    if(sz1>sz2)cout<<'>'<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
