
///PROBLEM LINK ->  https://codeforces.com/contest/1833/problem/A

#include<bits/stdc++.h>
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    Faster ;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<pair<char,char>,int>m;
        string s;
        cin>>s;
        for(int i=0; i<s.size()-1; i++)m[ {s[i],s[i+1]}]=1;
        int ans=0;
        for(auto i:m)ans+=i.second;
        cout<<ans<<endl;
    }
    return 0;

}
