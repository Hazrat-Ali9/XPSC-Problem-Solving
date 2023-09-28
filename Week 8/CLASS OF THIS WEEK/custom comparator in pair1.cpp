#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>x,pair<int,int>y)
{
    if(x.first==y.first)return x.second>y.second;
    return x.first<y.first;
}
int main()
{
    /*
    int put>>
    1 3
    3 6
    1 4
    4 6
    4 7
    */
    vector<pair<int,int>>a(5);
    for(auto &i:a)cin>>i.first>>i.second;
    cout<<"NOW the array is\n";
    sort(a.begin(),a.end(),cmp);
    for(auto i:a)cout<<i.first<<" "<<i.second<<endl;

    return 0;
}
