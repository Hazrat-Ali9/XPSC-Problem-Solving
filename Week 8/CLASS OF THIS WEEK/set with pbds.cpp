/*
if i use set with pbds, i can do everything what i can with just set. but i can do two  extra thing

i) can get element by index with time complexity   O(logn) but it will take O(n) in set
ii)can know that how element are smaller then the given target
*/
///PROBLEM LINK ->
#include<bits/stdc++.h>
using namespace std;
// this  lines   policy based data structures
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    ordered_set<int>s;
    s.insert(1);
    s.insert(10);
    s.insert(1);
    s.insert(11);
    s.insert(100);
    s.insert(40);
    for(auto i:s)cout<<i<<" ";// whole set
    cout<<endl;
    auto  element_of_thard_index = s.find_by_order(3); /// and it will find the target with in O(logn)
    cout<<*element_of_thard_index<<endl;
    int x = s.order_of_key(11);/// it tells how many element are strictly  less then the target
    cout<<x<<endl;
    return 0;
}
