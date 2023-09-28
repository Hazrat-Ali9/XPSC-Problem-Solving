
/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1744/problem/D

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
    vector<ll>ar(n);
    for(auto &i:ar)cin>>i;
    ll cOunt=0;
    ll ans =0;
    for(auto i:ar)
    {
        if(i%2==0)
        {
            ll num = i;
            while(num%2==0)
            {
                cOunt++;
                num/=2;
                if(cOunt>=n)
                {
                    cout<<ans<<endl;
                    return;
                }
            }
        }
    }

//    cout<<"1st count = "<<cOunt<<endl;
//    cout<<"n = "<<n<<endl;

    priority_queue<ll>pq;
    for(ll i=2; i<=n; i+=2)
    {
        ll indx =i;
        ll now =0;
        while(indx%2==0)
        {
            now++;
            indx/=2;
        }
        pq.push(now);
    }


//    while(pq.size())
//    {
//        cout<<pq.top()<<endl;
//        pq.pop();
//    }

    while(pq.size())
    {
        cOunt+=pq.top();
        ans++;
        pq.pop();
        if(cOunt>=n)
        {
            cout<<ans<<endl;
            return ;
        }
    }
    cout<<-1<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
