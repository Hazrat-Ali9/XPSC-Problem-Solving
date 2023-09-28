/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1690/problem/B

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
    ll sum2=0;
    cin>>n;
    vector<ll>ar1(n);
    vector<ll>ar2(n);
    for(auto &i:ar1)cin>>i;
    for(auto &i:ar2)
    {
        cin>>i;
        sum2+= i;
    }
    if(sum2==0)
    {
        yes;
        return;
    }
    ll def=-1e18;
    ll def_zro=-1e18;
    ll temdef;

//    for(auto i:ar1)cout<<i<<" ";
//    cout<<endl;
//    for(auto i:ar2)cout<<i<<" ";
//    cout<<endl;


    for(ll i=0; i<n; i++)
    {
        //cout<<i<<endl;
        if(ar2[i]==0)
        {
            def_zro = max(ar1[i]-ar2[i],def_zro);
        }
        else
        {
            temdef = ar1[i]-ar2[i];

            if(def == -1e18)def = temdef;

            else
            {
                if(temdef!=def)
                {
                    //cout<< "f**\n";
                    no;
                    return ;
                }
            }
        }

        if(ar1[i]<ar2[i])
        {
            no;
            return;
        }
    }




    // cout<< def<<endl;
    // cout<< def_zro<<endl;
    if(def<def_zro)no;
    else
        yes;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
