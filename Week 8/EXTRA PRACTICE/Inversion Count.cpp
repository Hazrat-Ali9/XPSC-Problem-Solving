/*
*/
///PROBLEM LINK -> https://www.spoj.com/problems/INVCNT/
#include<bits/stdc++.h>
using namespace std;
// this  5 lines   policy based data structures
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    long long  int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        ordered_set< long long int>s;
        vector<int>ar(n);
        for( long long int i=0; i<n; i++)cin>>ar[i];
        long long  int ans=0;
        for( long long int i=n-1; i>=0; i--)
        {
            if(i==n-1)s.insert(ar[i]);
            else
            {
                ans+=s.order_of_key(ar[i]);
                s.insert(ar[i]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
