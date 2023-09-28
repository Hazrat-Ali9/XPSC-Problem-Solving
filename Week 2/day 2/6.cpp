#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>ar;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        ar.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        if(ar[i]==0 && ar[i-1]!=0)
        {
            reverse(ar.begin(),ar.begin()+i);
        }
    }
    for(auto i:ar)
    {
        cout<<i;
        if(i<n-1)
            cout<<" ";
    }
    return 0;
}
