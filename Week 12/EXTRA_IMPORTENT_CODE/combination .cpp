#include<bits\stdc++.h>
using namespace std;
long long int facto(int n)
{
    if(n==0)return 1;
    return n*facto(n-1);
}
int main()
{
    vector<int> a;
    a.resize(26);
    string s="mujibnagar";
    for(int i=0; i<s.size(); i++)
    {
        a[s[i]-97]++;
    }
    long long int sum=1;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]>1)
        {
            sum=sum*facto(a[i]);
        }
    }
    cout<<facto(s.size())/sum;
    return 0;
}
