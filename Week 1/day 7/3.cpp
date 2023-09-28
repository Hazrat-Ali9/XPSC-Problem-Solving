#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fre[26]={};
    for(int i=1; i<=n; i++)
    {
        char c;
        cin>>c;
        fre[c-'a']++;
    }

    for(int i=0; i<26; i++)
    {
        if(fre[i]>0)
        {
            for(int j=1; j<=fre[i]; j++)
            {
                printf("%c",i+97);
            }
        }

    }
    return 0;
}
