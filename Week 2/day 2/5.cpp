#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unordered_map<string,int>p1;
        unordered_map<string,int>p2;
        unordered_map<string,int>p3;
        vector<string>pi;
        vector<string>pii;
        vector<string>piii;
        int p1p=0;
        int p2p=0;
        int p3p=0;
        int n;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            string s;
            cin>>s;
            p1[s]=1;
            pi.push_back(s);
        }
        for(int i=1; i<=n; i++)
        {
            string s;
            cin>>s;
            p2[s]=1;
            pii.push_back(s);
        }
        for(int i=1; i<=n; i++)
        {
            string s;
            cin>>s;
            p3[s]=1;
            piii.push_back(s);
        }

        for(auto i:pi)
        {
            if(p2[i] + p3[i]==0)p1p+=3;
            if(p2[i] + p3[i]==1)p1p+=1;
        }

        for(auto i:pii)
        {
            if(p1[i] + p3[i]==0)p2p+=3;
            if(p1[i] + p3[i]==1)p2p+=1;
        }

        for(auto i:piii)
        {
            if(p2[i] + p1[i]==0)p3p+=3;
            if(p2[i] + p1[i]==1)p3p+=1;
        }


        cout<<p1p<<" "<<p2p<<" "<<p3p<<endl;

    }
    return 0;
}
