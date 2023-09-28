/// link >> https://codeforces.com/contest/1872/submission/222392534
#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool is_prime(ll n)
{
    if (n == 1)return false;
    if (n == 2)return true;
    if (n % 2 == 0)return false;
    for (ll i = 3; i * i <= n; i++)if (n % i == 0)return false;
    return true;
}
void TEST_CASES()
{
    int a,b;
    cin>>a>>b;
    for(int i=2; i*i<=b; i++)
    {
        if(b%i==0)
        {
            int x=i;
            int y=b/i;
            if(is_prime(x))
            {
                cout<<x<<" "<<b-x<<endl;
                return;
            }
            else if(is_prime(y))
            {
                cout<<y<<" "<<b-y<<endl;
                return;
            }
        }
    }
    if(a!=b && b-3>0)
    {
        cout<<2<<" "<<b-3<<endl;
        return;
    }
    cout<<-1<<endl;
}
int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    cin>>t;
    while(t--)TEST_CASES();
    return 0;
}
