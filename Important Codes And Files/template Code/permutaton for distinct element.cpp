#include <bits/stdc++.h>
using namespace std;
vector<string>ans;
int call=0;
void solve(int ind,string s)
{
    if(ind>=s.size())
    {
        ans.push_back(s);
        return;
    }
    for(int i=ind; i<s.size(); i++)
    {
        if(i!=ind && s[i]==s[ind])continue;
        swap(s[i],s[ind]);
        solve(ind+1,s);
        swap(s[i],s[ind]);
    }
}
int main()
{
    string s;
    cin>>s;
    solve(0,s);
    cout<<ans.size()<<endl;
    for(auto i:ans)cout<<i<<endl;
    return 0;
}
