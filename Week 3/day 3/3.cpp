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

    ll sum[n+1];
    sum[0]=0;
    for(ll i=1; i<=n/2; i++)
    {
        sum[i]=n-i;
    }

    for(ll i=n; i>=n/2+1; i--)
    {
        sum[i]=sum[n-i+1];
    }
    if(n%2==1)sum[ n/2 + 1]= n/2;

   ll max_sum=0;
    for(int i=1; i<=n; i++)max_sum+=sum[i];


    vector<char>car(n+1);
    for(int i=1; i<=n; i++)cin>>car[i];
    vector<ll>ansar(n+1);

    ll totol_sum=0;
    for(int i=1; i<=n; i++)
    {
        if(car[i]=='L')totol_sum+= i-1;
        else totol_sum+= n-i;
    }


    int left=1;
    int rigt=n;
    int chang=0;



    int mid =n/2;

    while(totol_sum<max_sum)
    {
        if(car[left]=='L' && left<=n/2)
        {
            ll ad = (n-left) - (left-1);
            totol_sum+=ad;
            chang++;
            ansar[chang]=totol_sum;
            if(totol_sum==max_sum)break;
            left++;
        }
        else left++;
        if(car[rigt]=='R' && rigt>=n/2 +1)
        {
            ll ad = (rigt-1) - (n-rigt);
            totol_sum+=ad;
            chang++;
            ansar[chang]=totol_sum;
            if(totol_sum==max_sum)break;
            rigt--;
        }
        else rigt--;
    }



    for(int i=chang; i<=n; i++)ansar[i]=max_sum;
    for(int i=1; i<=n; i++)cout<<ansar[i]<<" ";
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
