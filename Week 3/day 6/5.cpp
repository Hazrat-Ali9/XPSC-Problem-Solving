
/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1759/problem/B
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
    ll n,s;
    cin>>n>>s;
    int fre[101]= {0};
    int m=-1;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        fre[x]++;
        m = max(m,x);
    }



    int sum = 0;
    for(int i=1; i<=m; i++)if(fre[i]==0)sum+=i;
    int remin = s- sum;




    if(remin== 0)
    {
        yes;
        return;
    }

    int now = m+1;


    while(remin>=now)
    {

        remin-=now;
        if(remin==0)
        {
            yes;
            return ;
        }
        now++;
    }

   no;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
