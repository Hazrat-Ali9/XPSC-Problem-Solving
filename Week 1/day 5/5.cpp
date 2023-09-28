#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s1 = to_string(n);
    string s2;
    for(int i=s1.size()-1; i>=0; i--)s2+=s1[i];
    if(s1==s2)
    {
        cout<<s1<<endl;
        cout<<"YES";
    }

    else
    {
        int f =0;
        for(int i=0; i<s2.size(); i++)
        {
            if(s2[i]!='0')
            {
                f=i;
                break;
            }
        }

        for(int i=f; i<s2.size(); i++)cout<<s2[i];
        cout<<endl;

        cout<<"NO";
    }


}

