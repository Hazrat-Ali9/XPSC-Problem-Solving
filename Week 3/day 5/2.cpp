/*


/there is no use of  k
এখানে k এর মানটার কোন প্রয়োজন নাই শুধুমাত্র  কনফিউশন তৈরি করার জন্য দেওয়া হয়েছে  think so

*/

///PROBLEM LINK -> https://codeforces.com/contest/1833/problem/B


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
    ll n,k;
    cin>>n>>k;
    vector<pair<int,int>>ar1;
    vector<int>ar2;
    int res[n];
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        ar1.push_back({x,i});
    }
    sort(ar1.begin(),ar1.end());
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        ar2.push_back(x);
    }
    sort(ar2.begin(),ar2.end());
    for(int i=0; i<n; i++)
    {
        res[ar1[i].second] = ar2[i];
    }
    for(int i=0; i<n; i++)
        cout<<res[i]<<" ";
    cout<<endl;
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
