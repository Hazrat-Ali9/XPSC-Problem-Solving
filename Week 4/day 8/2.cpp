///PROBLEM LINK ->   https://codeforces.com/contest/1729/problem/A

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
    string s1,s2="";
    int n;
    cin>>n;
    cin>>s1;
    for(ll i=s1.size()-1; i>=0; i--)
    {
       // cout<<i<<" "<<endl;
        int x;
        if(s1[i]=='0')
        {
            string num ="00";
            num[0]=s1[i-2];
            num[1]=s1[i-1];
            x = stoi(num);
            s2.push_back(x+'a'-1);
            i-=2;
        }
        else
        {
            string num ="0";
            num[0]=s1[i];
            x = stoi(num);
            s2.push_back(x+'a'-1);
        }
        //reverse(s2.begin(), s2.end());
    }
    for(int i=s2.size()-1; i>=0; i--)cout<<s2[i];
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)    solve();
    return 0;

}