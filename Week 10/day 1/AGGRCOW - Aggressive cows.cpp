/// >    https://www.spoj.com/problems/AGGRCOW/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n=5,c=3;
        cin>>n>>c;
        vector<long long int>ar(n);
        for(auto &i:ar)cin>>i;
        sort(ar.begin(),ar.end());
        long long int ans = 0;
        long long int low = 0,higH = ar.back()-ar[0],mid,now,Now;
        while(low<=higH)
        {
            mid = low + (higH-low)/2;
            now = 1;
            for(long long int i=0; i<n-1; i++)
            {
                Now = ar[i];
                while(ar[i]-Now<mid)
                {
                    i++;
                    if(i>=n)break;
                    else if(ar[i]-Now>=mid)
                    {
                        now++;
                        i--;
                        break;
                    }
                }
            }
            if(now>=c)
            {
                ans = max(ans,mid);
                low = mid + 1;
            }
            else higH =  mid - 1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
