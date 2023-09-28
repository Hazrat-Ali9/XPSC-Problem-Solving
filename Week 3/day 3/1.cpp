
///PROBLEM LINK ->  https://codeforces.com/contest/1676/problem/D

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

int sum_calculator(int x,int y,vector<vector<int>>&a,int r,int c)
{
    int sum=a[x][y];

// this part for upper_left
    int up_x = x-1;
    int up_y = y-1;
    while(up_x>=0 && up_y>=0)
    {
        sum+= a[up_x][up_y];
        up_x--;
        up_y--;
    }


    // this part for upper_right
    up_x = x-1;
    up_y = y+1;
    while(up_x>=0 && up_y<c)
    {
        sum+= a[up_x][up_y];
        up_x--;
        up_y++;
    }


    // this part for under_left
    int un_x = x+1;
    int un_y = y-1;
    while(un_x<r && un_y>=0)
    {
        sum+= a[un_x][un_y];
        un_x++;
        un_y--;
    }


    // this part for under_right
    un_x = x+1;
    un_y = y+1;
    while(un_x<r && un_y<c)
    {
        sum+= a[un_x][un_y];
        un_x++;
        un_y++;
    }

    return sum;
}
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>ar(n);
    int x;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>x;
            ar[i].push_back(x);
        }
    }
    int ans=-1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            ans= max(ans,sum_calculator(i,j,ar,n,m));
        }
    }

    cout<<ans<<endl;
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
