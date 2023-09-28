#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int len=s.size();
    int firstindx =0;
    int  lastindx =len-1;
    while(firstindx<=lastindx)
    {
        if(s[firstindx]!=s[lastindx])
        {
            cout<<"NO";
            return 0;
        }
        firstindx++;
        lastindx--;
    }
    cout<<"YES";
    return 0;
}

