/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1849/problem/B

#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>x,pair<int,int>y)
{
    if(x.first==y.first)return x.second<y.second;
    return x.first>y.first;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>zero;
        vector<pair<int,int>>not_zero;
        int n,k;
        cin>>n>>k;
        int h;
        int now;
        for(int i=1; i<=n; i++)
        {
            cin>>h;
            now=h%k;
            if(now==0)zero.push_back(i);
            else not_zero.push_back({now,i});
        }
        sort(zero.begin(),zero.end());
        sort(not_zero.begin(),not_zero.end(),cmp);
        for(auto i:zero)cout<<i<<" ";
        for(auto i:not_zero)cout<<i.second<<" ";
        cout<<endl;
    }
    return 0;
}
