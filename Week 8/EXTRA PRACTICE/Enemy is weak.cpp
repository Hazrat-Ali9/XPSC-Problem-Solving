/*
*/
///PROBLEM LINK -> https://codeforces.com/contest/61/problem/E
#include<bits/stdc++.h>
using namespace std;
// this  5 lines   policy based data structures
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    long long int n;
    cin>>n;
    vector<long long int>inv(n);
    ordered_set< long long int>s;
    vector<int>ar(n);
    for( long long int i=0; i<n; i++)cin>>ar[i];
    for( long long int i=n-1; i>=0; i--)
    {
        if(i==n-1)
        {
            s.insert(ar[i]);
            inv[i]=0;
        }
        else
        {
            inv[i]= s.order_of_key(ar[i]);
            s.insert(ar[i]);
        }
    }
    long long ans=0;
    s.clear();
    for(long long int i=0; i<n-1; i++)
    {
        if(i==0)s.insert(ar[i]);
        else
        {
            long long int big = i - s.order_of_key(ar[i]);
            ans+=inv[i]*big;
            s.insert(ar[i]);
        }
    }
    cout<<ans<<endl;
    return 0;
}
