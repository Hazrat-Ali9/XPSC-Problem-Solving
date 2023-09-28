
/*


স্ট্রিং এর প্রথম উপাদান এবং লাস্ট উপাদানের absolute  বিয়োগফলই সব সময় মিনিমাম হবে



*/

///PROBLEM LINK ->   https://codeforces.com/contest/1729/problem/C

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
ll dp[100];

void solve()
{
    string s;
    cin>>s;
    vector<ll>a;
    for(ll i=0; i<s.size(); i++)
    {
        a.push_back(s[i]-'a' +1);
    }

    vector<pair<ll,ll>>ar2;

    for(ll i=0; i<s.size(); i++)
    {
        ar2.push_back({a[i],i});
    }
    sort(ar2.begin(),ar2.end());
    // for(auto i:ar2)cout<<'('<<i.first<<','<<i.second<<')'<<" ";

    ll sta = a[0];
    ll dsi =a[a.size()-1];
    ll min_cost = abs(a[0]-a.back());


    vector<ll>ans;

    if(dsi<=sta)
    {
        for(int i=ar2.size()-1; i>=0; i--)
        {
            if(ar2[i].first>sta)continue;
            if(ar2[i].second!=0 && ar2[i].second!=a.size()-1)
            {
                if(ar2[i].first<dsi)break;
                ans.push_back(ar2[i].second +1);
            }
        }
        ans.insert(ans.begin(),1);
        ans.push_back(a.size());
    }
    else
    {
        for(int i=0; i<a.size(); i++)
        {
            if(ar2[i].first<sta)continue;
            if(ar2[i].second!=0 && ar2[i].second!=a.size()-1)
            {
                if(ar2[i].first>dsi)break;
                ans.push_back(ar2[i].second +1);
            }
        }
        ans.insert(ans.begin(),1);
        ans.push_back(a.size());
    }










    ll totaL_jump = ans.size();
    cout<<min_cost<<" "<<totaL_jump<<endl;
    for(auto i:ans)cout<<i<<" ";
    cout<<endl;


}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--)
    {

        solve();
        memset(dp,-1,sizeof(dp));
    }
    return 0;
}
