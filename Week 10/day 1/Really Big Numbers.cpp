/// problem link >> https://codeforces.com/problemset/problem/817/C

#include<bits/stdc++.h>
using namespace std;
bool chacker(long long int s,long long int n)
{
    string  stR = to_string(n);
    long long int total =0;
    for(long long int i=0; i<stR.size(); i++)total+=(stR[i]-48);
    return(abs(n-total)>=s);
}
int main()
{
    long long int  n,ans=0,mid,l=1,h,s;
    cin>>n>>s;
    h=n;
    while(l<=h)
    {
        mid = l+(h-l)/2;
        if(chacker(s,mid))
        {
            ans+=(h-mid +1);
            h=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<endl;
    return 0;
}
