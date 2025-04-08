//   https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {
        // code here
        long long int maxx=INT_MIN;
        int i=0;
        int j=0;
        long long   int sum=0;
        while(j<N)
        {
            sum+=Arr[j];
            if(j<K-1)
            {
                j++;
            }
            else
            {
                maxx= max(sum,maxx);
                sum-=Arr[i];
                i++;
                j++;
            }
        }
        return maxx;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0; i<N; ++i)
        {
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends
