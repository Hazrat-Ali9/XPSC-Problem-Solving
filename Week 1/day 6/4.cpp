#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    map<int,int>fre;
    int miN = INT_MAX;
    for( int i=1; i<=n; i++ )
    {
        int num;
        cin>>num;
        miN=min(miN,num);
        fre[num]++;
    }

    if(fre[miN]==1 || fre[miN]%2==1)cout<<"Lucky";
    else cout<<"Unlucky";
}
int main()
{

    int t = 1;
    // cin>>t;
    while(t--)
        solve();
    return 0;
}
