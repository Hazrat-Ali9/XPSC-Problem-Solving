#include<bits/stdc++.h>
using namespace std;
bool compr(string a,string b) //function to compare to string
{
    int n1=a.size();
    int n2=b.size();
    int n;
    if(n1<n2)n=n1;
    else n=n2;
    for(int i=0; i<n; i++)
    {
        if(a[i]>b[i])return false;
        else if(a[i]<b[i]) return true;
    }
    if(n1<n2)return true;
    else return false;
}
int main()
{
    int n;
    cin>>n;
    string a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(compr(a[i],a[j])==0)swap(a[i],a[j]);
        }

    }
    for(int i=0; i<n; i++)cout<<a[i]<<" ";
    return 0;
}
