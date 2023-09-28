#include<bits/stdc++.h>
using namespace std;
 
bool yes(int n)
{
    for(int i=2; i<n; i++)
        if(n%i==0)return false;
    return true;
}
 
vector<int> prime(int nUm)
{
    vector<int> pri;
    for(int i=2; i<=nUm/2 +1; i++)
        if( yes(i))pri.push_back(i);
    return pri;
}
 
bool solve(int num)
{
    vector<int>ar = prime(num);
    int dev=0;
    for(auto i:ar)
    {
        if(num%i==0)dev++;
        if(dev>2)return false;
    }
    if(dev==2)return true;
    return false;
}
 
int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=1; i<=n; i++)
        if(solve(i))ans++;
//    vector<int>ar=prime(n);
//    for(auto i:ar)cout<<i<<" ";
    cout<<ans;
    return 0;
}