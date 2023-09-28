/*
*/
///PROBLEM LINK ->  https://codeforces.com/contest/1841/problem/B
#include<bits/stdc++.h>
using namespace std;
// this  5 lines   policy based data structures
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T> using PBDS = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//......... macros.........
#define ll long long
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl cout<<endl
#define sp <<" "
// ........ constant.......
const ll inf=1e18;
const ll mod = 1000000007;
const double PI =  3.1415926535897932384626433832795;
//.......global.........
void ASHIK_ASLAM()
{
    Faster ;
    int n;
    cin>>n;
    bool brok=false;
    string ans="";
    vector<int>a(n),taken;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(taken.empty())
        {
            taken.push_back(a[i]);
            ans.push_back('1');
        }
        else
        {
            if(brok)
            {
                if(a[i]<taken.back())
                {
                    ans.push_back('0');
                }
                else
                {
                    if(a[i]>taken[0])ans.push_back('0');
                    else
                    {
                        taken.push_back(a[i]);
                        ans.push_back('1');
                    }
                }
            }
            else
            {
                if(a[i]>=taken.back())
                {
                    taken.push_back(a[i]);
                    ans.push_back('1');
                }
                else
                {
                    if(a[i]>taken[0]) ans.push_back('0');
                    else
                    {
                        brok=true;
                        taken.push_back(a[i]);
                        ans.push_back('1');
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
}
int main()
{
    Faster ;
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) ASHIK_ASLAM();
    return 0;
}
