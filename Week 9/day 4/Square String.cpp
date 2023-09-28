/// problem link https://codeforces.com/problemset/problem/1619/A

#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.size()&1)cout<<"NO\n";
        else
        {
            int flag=1;
            for(int i=0,j=s.size()/2; i<s.size()/2,j<s.size(); i++,j++)if(s[i]!=s[j])flag=0;
            if(!flag)cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
}
