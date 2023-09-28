#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lenOfLongSubarr(int A[],  int N, int K)
    {
        int ans=0;
        int a[N+1];
        a[0]=0;
        int pre[N+1];
        pre[0]=0;
        for( int i=0; i<N; i++)a[i+1]=A[i];
        unordered_map<long long int,int>m;
        for(int i=1; i<=N; i++)
        {
            pre[i] = pre[i-1] + a[i];
            if(m.find(pre[i])==m.end())m[pre[i]]=i;
            if(pre[i]==K)ans=i;
            else if(m.find(pre[i]-K)!=m.end())ans=max(ans,i-m[pre[i]-K]);
        }
        return ans;
    }
};

int main()
{

    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    Solution x;

    int y= x.lenOfLongSubarr(a,n,k);
    cout<<y;
    return 0;
}
