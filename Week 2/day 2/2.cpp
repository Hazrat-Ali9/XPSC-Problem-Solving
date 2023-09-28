#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int fre[26]= {0};
    for(int i=0; i<s.size(); i++)fre[s[i]-'a']=1;

    int fir =0;

    for(int  i=0; i<26; i++)
        if(fre[i]==1)
        {
            fir=i;
            break;
        }

    if(fre[0]==0)
    {
        cout<<'a';
        return 0;
    }

    for(int  i=fir; i<26; i++)
        if(fre[i]==0)
        {
            printf("%c",i+'a');
            return 0;
        }
    cout<<"None";

    return 0;
}
