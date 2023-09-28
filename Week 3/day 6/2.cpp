
/*



*/

///PROBLEM LINK -> https://codeforces.com/contest/1800/problem/B

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
    string s;
    cin>>s;
    int fre_small[26]= {0};
    int fre_capi[26]= {0};
    for(int i=0; i<n; i++)
    {
        if(s[i]>='A' && s[i]<='Z')fre_capi[s[i]-'A']++;
        else fre_small[s[i]-'a']++;
    }

//    for(auto i:fre_capi)cout<<i<<" ";
//    cout<<endl;
//    for(auto i:fre_small)cout<<i<<" ";
//    cout<<endl;



    ll ans =0;
    vector<ll>remin;

    for(int i=0; i<26; i++)
    {
        int miN =min(fre_capi[i],fre_small[i]);
        int maX  =max(fre_capi[i],fre_small[i]);
        ans+=miN;
        remin.push_back(maX-miN);
    }

    for(int i=0; i<26; i++)
    {
        if(remin[i]==1)remin[i]=0;
        else if(remin[i]%2==1)remin[i]--;
    }

//    for(auto i:remin)cout<<i<<" ";
//    cout<<endl;

    int sum =0;
    for(auto i:remin)sum+=i;
    // cout<<sum<<endl;
    if(sum>= k*2)ans+=k;
    else ans+=sum/2;
    cout<<ans<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
