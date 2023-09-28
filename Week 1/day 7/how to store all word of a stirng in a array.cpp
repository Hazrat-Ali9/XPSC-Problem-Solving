#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    vector<string>ar;
    int i=0;
    while(i<s.size())
    {
        if(s[i]!=' ')
        {
            string s2;
            while(s[i]!=' ' && i<s.size())
            {
                s2+=s[i];
                i++;
            }
            ar.push_back(s2);
        }
        else i++;
    }
    for(int i=0; i<ar.size(); i++)
    {
        for(int j=ar[i].size()-1; j>=0; j--)
        {
            cout<<ar[i][j];
        }
        if(i<ar.size()-1)
            cout<<" ";
    }
    return 0;
}
