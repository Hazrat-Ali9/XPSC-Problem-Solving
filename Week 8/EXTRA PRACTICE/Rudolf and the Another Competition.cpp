/// problem link >>   https://codeforces.com/contest/1846/problem/C
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<pair<long long int,long long int>,long long int>x,pair<pair<long long int,long long int>,long long int>y)
{
    if(x.first.first==y.first.first && x.first.second==y.first.second)return x.second<y.second;
    if(x.first.first==y.first.first)return x.first.second<y.first.second;
    return x.first.first>y.first.first;
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,h;
        cin>>n>>m>>h;
        vector<vector<long long int>>ar(n);
        long long int mi;
        for(long long int i=0; i<n; i++)
        {
            for(long long int j=0; j<m; j++)
            {
                cin>>mi;
                ar[i].push_back(mi);
            }
            sort(ar[i].begin(),ar[i].end());
        }
        vector<pair<pair<long long int,long long int>,long long int>>stD;
        for(long long int i=0; i<n; i++)
        {
            long long int pt=0;
            long long int pn=0;
            long long int j=0;
            long long int total_time=0;
            while(j<m && total_time<=h)
            {
                total_time+=ar[i][j];
                if(total_time<=h)
                {
                    pt++;
                    pn+=total_time;
                }
                j++;
            }
            stD.push_back({{pt,pn},i+1});
        }
        sort(stD.begin(),stD.end(),cmp);
        long long int ans;
        for(long long int i=0; i<n; i++)if(stD[i].second==1)ans=i+1;
        cout<<ans<<endl;
    }
    return 0;
}
