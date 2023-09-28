#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll f;
        ll L;
        cin>>f>>L;
        if(f>L)swap(f,L);
        cout<<L*(L+1)/2 - (f-1)*(1+f-1)/2<<endl;
    }
    return 0;
}

