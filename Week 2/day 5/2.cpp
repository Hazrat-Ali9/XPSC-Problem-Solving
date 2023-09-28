#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ans=0;
    while(s.size()>1)
    {
        int sum=0;
        for(int i=0; i<s.size(); i++)sum+=s[i]-48;
        s=to_string(sum);
        ans++;
    }
    cout<<ans;
    return 0;
}
