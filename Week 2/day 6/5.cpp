#include<bits/stdc++.h>
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    Faster ;
    long long int  n,base,digit=0;
    long long int now=0;
    int i=0;
    cin>>n>>base;
    while(now<n)
    {
        now+=(base-1)*pow(base,i);
        i++;
    }
    cout<<i;
}
