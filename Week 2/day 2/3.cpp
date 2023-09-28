#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int fir =0;
    for(int i=0; i<s.size()-2; i++)
    {
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C')fir++;
    }
    cout<<fir;
    return 0;
}
