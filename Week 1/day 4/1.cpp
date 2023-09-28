#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,t;
    float i =1;
    int b;
    cin>>a>>b>>t;
    int res=0;
    while(a*i<= t+0.5)
    {
        res+=b;
        i++;
    }
    cout<<res;
    return 0;
}
