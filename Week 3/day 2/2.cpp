
//PROBLEM LINK -> https://codeforces.com/contest/1703/problem/A

#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int flag=1;

        if(s[0]!= 'Y' &&  s[0]!= 'y' ||    s[1]!= 'E' &&   s[1]!= 'e' ||  s[2]!= 'S' &&  s[2]!= 's')
        {
            flag=0;

        }


    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
  int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;

}
