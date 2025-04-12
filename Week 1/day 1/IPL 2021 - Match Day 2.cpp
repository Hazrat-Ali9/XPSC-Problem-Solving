//https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
class Solution
{
public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k)
    {
        vector<int>ar;
        priority_queue<pair<int,int>>pq;
        int i;
        for(i=0; i<k; i++)pq.push({arr[i],i});
        ar.push_back(pq.top().first);


        for(; i<n; i++)
        {
            pq.push({arr[i],i});
            while(pq.top().second <=i-k)pq.pop();
            ar.push_back(pq.top().first);
        }
        return ar;
    }
};

//{ Driver Code Starts
int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
