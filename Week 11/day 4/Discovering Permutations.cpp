#include<bits/stdc++.h>///link>>https://lightoj.com/problem/discovering-permutations
using namespace std;
int main()
{
    int t;
    cin>>t;
    int c=1;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s  = "";
        for(int i=1; i<=n; i++)s.push_back(64+i);
        k--;
        cout<<"Case " <<c<<":\n";
        do cout<<s<<endl;
        while(next_permutation(s.begin(),s.end())&&k--);
        c++;
    }
    return 0;
}




/*
code without next_permutation function>>>>


#include<bits/stdc++.h>   /// link >>> https://lightoj.com/problem/discovering-permutations
using namespace std;
long long facto(long long int n)
{
    long long int sum = 1;
    for(long long int i=1; i<=n; i++)
    {
        sum*=i;
        sum%=1000000007;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    for(int T=1; T<=t; T++)
    {
        int n,k;
        cin>>n>>k;
        string s  = "";
        for(int i=1; i<=n; i++)s.push_back(64+i);
        int  sz = s.size();
        cout<<"Case "<<T<<":"<<endl;
        cout<<s<<endl;
        for(int j = 2; j<=k; j++)
        {
            if(j>facto(n))break;
            for(int i=sz-1; i>=0; i--)
            {
                if(i<sz-1 && s[i]<s[i+1])
                {
                    int miN = INT_MAX;
                    int ind=-1;
                    for(int l = i+1; l<sz; l++)
                    {
                        if(s[l]>s[i])
                        {
                            if(s[l]-s[i]<miN)ind = l;
                        }
                    }
                    if(ind!=-1) swap(s[i],s[ind]);
                    sort(s.begin()+i+1,s.end());
                    break;
                }
            }
            cout<<s<<endl;
        }
    }
    return 0;
}




*/