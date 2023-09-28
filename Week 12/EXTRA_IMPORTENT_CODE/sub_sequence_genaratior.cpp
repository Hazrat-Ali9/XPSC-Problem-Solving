#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>ar;
    for(int i=1; i<=n; i++)
    {
        string s;
        cin>>s;
        ar.push_back(s);
    }
    vector<string>ar2;
    ar2.push_back(ar[0]);
    for(int i=1; i<n; i++)
    {
        ar2.push_back(ar[i]);
         int l=ar2.size();
        for(int k=0;k<l-1;k++)
        {

                ar2.push_back(ar2[k]+ar[i]);
        }
    }
    for(auto j:ar2)cout<<j<<" ";
    return 0;
}
