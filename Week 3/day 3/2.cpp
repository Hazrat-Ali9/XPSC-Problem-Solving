// https://codeforces.com/contest/1692/problem/B

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
    cin>>n;
    vector<int>a(n,0);
    unordered_map<string,int>m;
    string s;
    vector<string>sar;
    for(int i=1; i<=n; i++)
    {
        cin>>s;
        sar.push_back(s);
        m[s]++;
    }
//    cout<<endl;
//    for(auto i:m)cout<<i.first<<" "<<i.second<<endl;
//    cout<<endl;



    for(int i=0; i<n; i++)
    {
        if(sar.size()==1)a[i]=0;
        else
        {
            int l=0;
            int r=1;
            while(r<sar[i].size())
            {
                string s_1is="";
                string s_2is="";
                for(int I=0; I<=l; I++)s_1is.push_back(sar[i][I]);
                for(int J=r; J<sar[i].size(); J++)s_2is.push_back(sar[i][J]);
//                cout<<endl;
//                cout<<s_1is<<" "<<s_2is<<endl;
//                cout<<endl;
                if(m[s_1is]>0  && m[s_2is]>0)
                {
                    a[i]=1;
                    break;
                }
                l++;
                r++;
            }

        }

    }





    for(auto i:a)cout<<i;
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
