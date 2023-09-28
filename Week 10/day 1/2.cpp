/// problem link>>> https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1552&mosmsg=Submission+received+with+ID+28684758
#include<bits/stdc++.h>;
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll>ar(n);
    for(auto &i:ar)cin>>i;
    sort(ar.begin(),ar.end());
    ll q;
    cin>>q;
    ll num;
    for(ll i=0; i<q; i++)
    {
        cin>>num;
        auto  Li = lower_bound(ar.begin(),ar.end(),num);
        auto Oi = upper_bound(ar.begin(),ar.end(),num);
        ll up = Oi-ar.begin();
        ll low = Li-ar.begin();
        ll lef = low-1;
        ll right = up;
        if(lef==-1 && right ==n)cout<<'X'<<" "<<'X'<<endl;
        else if(lef==-1)cout<<'X'<<" "<<ar[right]<<endl;
        else if(right ==n)cout<<ar[lef]<<" "<<'X'<<endl;
        else cout<<ar[lef]<<" "<<ar[right]<<endl;
    }
    return 0;
}
