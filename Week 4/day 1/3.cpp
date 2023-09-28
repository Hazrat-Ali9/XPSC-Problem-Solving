
// problem link >> https://www.codechef.com/problems/PALIXOR

#include<bits/stdc++.h>
using namespace std;
vector<int>pal;
void solve()
{
    int fre[1<<15]= {0};
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        fre[ar[i]]++;
    }
    long long int ans=0;


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<pal.size(); j++)
        {
            long long int k = ar[i]^pal[j];
            if(k<1<<15)ans+=fre[k];
        }
    }
    cout<<(ans+n)/2<<endl;
}
int main()
{
    for(int i=0; i<1<<15; i++)
    {
        string s1 = to_string(i);
        string s2 = s1;
        reverse(s1.begin(),s1.end());
        if(s1==s2 )pal.push_back(i);
    }
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
