#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> solve(string s,int i,int j)
    {
        int n =s.size();
        int l,r;
        int len=0;
        l=i-1;
        r=j+1;
        vector<int>a;
        a.resize(3);
        if(s[j]==s[i])
        {
            while(1)
            {
                if (l>=0 && r<=n-1)
                {
                    if(s[l]==s[r])
                    {
                        if(len<r-l+1)
                        {
                            len=r-l+1;
                            a[0]=len;
                            a[1]=l;
                            a[2]=r;
                        }
                        l--;
                        r++;
                    }
                    else break;
                }
                else break;
            }
        }
        if(a[0]==0)
        {
            if(s[i]==s[j])
            {
                a[0]=j-i+1;
                a[1]=i;
                a[2]=j;
            }
            else
            {
                a[0]=i-i+1;
                a[1]=i;
                a[2]=i;
            }
        }
        return a;
    }
    string longestPalindrome(string s)
    {
        vector<int>res;
        res.push_back(0);
        res.push_back(0);
        res.push_back(0);
        int n=s.size();
        for (int i=0; i<n; i++)
        {
            vector<int>res1=solve(s,i,i);
            vector<int>res2=solve(s,i,i+1);
            vector<int>res3;
            if(res1[0]>res2[0])res3=res1;
            else res3 =  res2;
            if(res3[0]>res[0])swap(res3,res);
        }
        string a1;
        for(int i=res[1]; i<=res[2]; i++)a1+=s[i];
        return a1;
    }
};
int main()
{
    Solution x;
    cout<<x.longestPalindrome("aacabdkacaa");
    return 0;
}
