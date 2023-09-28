/*
5 3
1 2 3 4 5
3 2
4 78 9
*/
#include<bits/stdc++.h>;
#define ll long long
using namespace std;
int main()
{
    ll n,c;
    cin>>n>>c;
    vector<ll>ar(n);
    for(auto &i:ar)cin>>i;
    auto maxElement = max_element(ar.begin(), ar.end());
    ll mX= * maxElement;
    ll low = mX;
    ll high = 1e3;
    ll ans = 1e6;
    ll mid;
    while(low<=high)
    {
        mid = low + (high-low)/2;
        ll ned=1;
        ll capacity = mid;
        ll flag = 1;
        for(ll i=0; i<n; i++)
        {
            if(capacity-ar[i]>=0)capacity-=ar[i];
            else
            {
                ned++;
                capacity= mid;
                capacity-=ar[i];
            }
            if(ned >c)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            ans=min(ans,mid);
            high = mid-1;
        }
        else low = mid+1;
    }
    cout<<ans<<endl;
    return 0;
}
