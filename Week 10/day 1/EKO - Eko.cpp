/// problem link >> https://www.spoj.com/problems/EKO/fbclid=IwAR2CCiz_wINq8BicbHBIpecjLgIPJhb-_a5R7rwYC_8-7fO53V0rX_4qYlE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    vector<long long int>ar(n);
    for(auto &i:ar)cin>>i;
    long long ans=0;
    long long int l=-1;
    long long int h=0;
    while(l<h)
    {
        long long int now=0;
        for(auto i:ar)if(i>h)now+=(i-h);
        if(now>=m)
        {
            ans=max(h,ans);
            if(h==0)
            {
                h=1;
                l=0;
            }
            else
            {
                l=h;
                h*=2;
            }
        }
        else h =(h+l)/2;
    }
    cout<<ans<<endl;
    return 0;
}
