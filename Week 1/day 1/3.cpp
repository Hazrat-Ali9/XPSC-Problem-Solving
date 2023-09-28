
//https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
//User function template for C++
class Solution
{
public:
    int search(string pat, string txt)
    {
        // code here
        long long int k = pat.size();
        long long int n = txt.size();
        long long int fre1[26]={0};
        long long int fre2[26]={0};
        for(auto c:pat)fre1[c-'a']++;
        long long int i = 0;
        long long int j = 0;
        long long res = 0;
        while(j<n)
        {
            fre2[txt[j]-'a']++;
            if(j<k-1)
            {
                j++;
            }
            else
            {
                bool flag=true;
                for(int it=0; it<26; it++)
                {
                    if(fre1[it]!=fre2[it])
                    {
                        flag= false;
                        break;
                    }
                }
                if(flag)res++;
                fre2[txt[i]-'a']--;
                i++;
                j++;
            }
        }
        return res;
    }

};

//{ Driver Code Starts.

int main()
{
    int t =1;
    // cin >> t;
    while (t--)
    {
        string pat="for", txt="forxxorfxdofr";
        // cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
