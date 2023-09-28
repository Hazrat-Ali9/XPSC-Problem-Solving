// problem link >> https://toph.co/p/eet-izz-phet
#include<bits/stdc++.h>
using namespace std;
int hashing(string s,int base)
{
    int mod = 1e9 + 7;
    int value=1;
    int ans=0;
    for(auto i:s)
    {
        int ascci = i-'a'+1;
        ans+=((value%mod)*(ascci%mod))%mod;
        ans = ans%mod;
        value = ((value%mod)*(base%mod))%mod;
    }
    return ans;
}
int main()
{
    map<pair<int,int>,bool>m;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        m[ {hashing(s,2),hashing(s,3)}]=true;
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        string s;
        cin>>s;
        if( m[ {hashing(s,2),hashing(s,3)}]==true)cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}
