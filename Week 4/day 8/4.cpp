/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1702/problem/A

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
    int clock,sh,sm;
    cin>>clock>>sh>>sm;

    int ah,am;
    int nh,nm;
    pair<int,int>ans= {1000,1000};
    for(int i=0; i<clock; i++)
    {
        cin>>ah>>am;
        if(ah>sh)
        {
            if(am<sm)
            {
                am+=60;
                ah--;
            }
            nh= ah-sh;
            nm= am-sm;
            ans = min(ans, {nh,nm});
        }
        else if(ah<sh)
        {
            ah+=24;
            if(am<sm)
            {
                am+=60;
                ah--;
            }
            nh= ah-sh;
            nm= am-sm;
            ans = min(ans, {nh,nm});
        }


        else
        {
            if(am<sm)
            {
                ah+=24;
                am+=60;
                ah--;
                nh= ah-sh;
                nm= am-sm;
                ans = min(ans, {nh,nm});
            }
            else
            {
                nh= ah-sh;
                nm= am-sm;
                ans = min(ans, {nh,nm});
            }
        }
    }






    cout<<ans.first<<" "<<ans.second<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}