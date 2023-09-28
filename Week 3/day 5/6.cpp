
///PROBLEM LINK -> https://codeforces.com/contest/1759/problem/A

#include<bits/stdc++.h>
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    Faster ;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        if(n==1)
        {
            if(s[0]=='Y' || s[0]=='e' || s[0]=='s')cout<<"YES\n";
            else cout<<"NO"<<endl;
        }
        else
        {
            int flag=1;
            for(int i=0; i<n-1; i++)
            {
                if(s[i]!= 'Y' && s[i]!= 'e' && s[i]!= 's')
                {

                    flag=0;
                    break;
                }
                else if(i==0)
                {
                    if(s[i]=='Y' && s[i+1]!='e')
                    {
                        flag=0;
                        break;
                    }
                    else if(s[i]=='e' && s[i+1]!='s')
                    {
                        flag=0;
                        break;
                    }
                    else if(s[i]=='s' && s[i+1]!='Y')
                    {
                        flag=0;
                        break;
                    }
                }

                else
                {
                    if(s[i]=='Y' && (s[i+1]!='e' ||    s[i-1]!='s' ))
                    {
                        flag=0;
                        break;
                    }
                    else  if(s[i]=='e' && (s[i+1]!='s' ||    s[i-1]!='Y' ))
                    {
                        flag=0;
                        break;
                    }

                    else  if(s[i]=='s' && (s[i+1]!='Y' ||    s[i-1]!='e' ))
                    {
                        flag=0;
                        break;
                    }
                }
            }
            if(flag==1)cout<<"YES\n";
            else cout<<"NO"<<endl;
        }
    }
    return 0;

}
