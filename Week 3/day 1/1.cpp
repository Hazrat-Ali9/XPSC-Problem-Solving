
// every problem has likn from day 2 so plz do it from day 2 . and i will add link here as soon as pssible

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

ll solve(vector<int>&a,ll k)
{
    int ans=0;
    int l=0;
    int r=0;
    long long int  sum=0;
    while(r<a.size())
    {
        sum+=a[r];
        if(sum>k)
        {
            while(sum>k)
            {
                sum-=a[l];
                l++;
            }
        }

        if(sum==k)
        {
            ans=max(ans,r-l+1);
        }

        r++;
    }
    return ans;
}
int main()
{
    Faster ;
    int n;
    int k;
    cin>>n>>k;
    vector<int>ar(n);
    for(int i=0; i<n; i++)cin>>ar[i];
    cout<<solve(ar,k);
    return 0;

}
