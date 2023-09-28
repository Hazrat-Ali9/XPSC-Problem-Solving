
///PROBLEM LINK -> https://codeforces.com/contest/1800/problem/C2

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
    for(int i=0; i<n; i++)cin>>ar[i];


    for(int i=0; i<n; i++)
    {

        if(ar[i]!=0)
        {
            int l=i;
            while(ar[l]>0 && l<n)l++;
            sort(ar.begin()+i,ar.begin()+l);
            i=l;
        }
    }

    // myVector.erase(myVector.begin() + indexToRemove);
//
//    for(auto i:ar)cout<<i<<" ";
//    cout<<endl;



    int sum =0;


    for(int i=0; i<n; i++)
    {
        if(ar[i]==0)
        {
            int l=i;
            while(l>=0)
            {
                if(ar[l]!=0)
                {
                    sum+=ar[l];
                    ar[l]=0;
                    break;
                }
                l--;
            }
        }
    }
    cout<<sum<<endl;
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
