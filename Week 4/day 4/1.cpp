///PROBLEM LINK ->   https://codeforces.com/contest/1772/problem/C
 
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
    vector<int>ar{0,1,2,4,7,11,16,22,29,37};
    int k,n;
    cin>>k>>n;
    int last_index=0;
    int total_print=0;
    for(int i=1; i<=k; i++)
    {
        if(n-ar[i]>=k-i)
        {
            cout<<ar[i]<<" ";
        }
        else
        {
            last_index = ar[i-1];
            total_print = i-1;
            break;
 
        }
    }
 
    if(last_index!=0)
        for(int i=1; i<=k-total_print; i++)
        {
            cout<<last_index+i<<" ";
        }
 
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)    solve();
    return 0;
 
}