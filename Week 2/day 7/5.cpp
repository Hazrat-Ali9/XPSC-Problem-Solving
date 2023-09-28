#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    map<long long int,long long int>m;
    long long int x;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        m[x]++;
    }
    for(auto i:m)
        if(i.second==1)
        {
            cout<<i.first;
            return 0;
        }
    return 0;
}
