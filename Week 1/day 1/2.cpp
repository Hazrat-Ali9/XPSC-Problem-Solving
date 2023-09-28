// https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
        long long int n, long long int k);

// Driver program to test above functions
int main()
{
    long long int t, i;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],
        long long int N, long long int K)
{
    vector<long long>ar;
    long long int i =0;
    long long int j =0;
    queue<long long int>q;
    while(j<N)
    {
        if(A[j]<0)q.push(A[j]);
        if(j<K-1)
        {
            j++;
        }
        else
        {
            if(q.size())ar.push_back(q.front());
            else ar.push_back(0);
            if(A[i]<0)q.pop();
            i++;
            j++;
        }
    }
    return ar;
}
