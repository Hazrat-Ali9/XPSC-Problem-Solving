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
vector<int> devi(int n)
{
    vector<int>ar;
    set<int>s;
    for(int i=1; i<=floor(sqrt(n)); i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i*j>n)break;
            else if (i*j==n)
            {
                s.insert(i);
                s.insert(j);
            }
        }
    }
    for(auto i:s)ar.push_back(i);
    return ar;
}
int main()
{
    Faster ;
    ll n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    set<int>dev;
    for(int i=0; i<n; i++)
    {
        vector<int>d=devi(a[i]);
        for(auto i:d)dev.insert(i);
    }


    int ans=0;
    int m=0;
    for(auto i:dev)
    {
        if(i>1)
        {
            int now=0;
            for(auto j:a)
                if(i<=j && j%i==0)now++;
            if(now>=m && i>ans)
            {
                m=now;
                ans=i;
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}
