
///   https://codeforces.com/contest/1692/problem/C


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
    int a[8][8];
    memset(a,0,sizeof(a));

    char x;
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            cin>>x;
            if(x=='#')a[i][j]=1;
            else a[i][j]=0;
        }
    }

    pair<int,int>ans;

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(a[i][j]==1 && a[i-1][j-1]==1 && a[i-1][j+1]==1 && a[i+1][j-1]==1 && a[i+1][j+1]==1)
            {
                ans = {i,j};
            }

        }


    }
    cout<<ans.first+1<<" "<<ans.second+1<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;

}
