#include<bits/stdc++.h>
using namespace std;

int longestKSubstr(string s, int k)
{
    int ans =-1;
    int fre[26] = {0};
    int l=0,r=0;
    int uniq=0;
    int n = s.size();
    while(r<n)
    {
        if(fre[s[r]-'a']==0)uniq++;
        fre[s[r]-'a']++;
        if(uniq == k)ans = max(ans,r-l+1);
        if(uniq>k)
        {
            while(uniq>k)
            {
                fre[s[l]-'a']--;
                l++;
                if(fre[s[l-1]-'a']==0) uniq--;

            }
        }
        r++;
    }
    return ans;
}

int main()
{
    string s;
    int k;
    cin>>s>>k;
    cout<<longestKSubstr(s,k);
    return 0;
}
