////  https://codeforces.com/contest/1859/problem/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=0;
        for(int i=n; i>=1; i--)
        {
            vector<int>ar(n+1);
            ar[n]=i;
            for(int j=0; j<i; j++)ar[j]=j;
            int now = n;
            for(int k=i; k<n; k++)
            {
                ar[k]=now;
                now--;
            }
            int sum=0;
            int m= 0;
            for(int J=1; J<=n; J++)
            {
                int now = ar[J]*J;
                sum+=now;
                m=max(now,m);
                //  cout<<ar[J]<<" ";
            }
            // cout<<endl;
            sum-=m;
            ans=max(ans,sum);
        }
        cout<<ans<<endl;
    }
    return 0;
}