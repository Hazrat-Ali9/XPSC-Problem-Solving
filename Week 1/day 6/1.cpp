#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    int ar[n+1];
    for(int i=1; i<=n; i++)cin>>ar[i];
    for(int i=1; i<=n; i+=k)
    {
        int miN=INT_MAX;
        for(int j=i; j<i+k; j++)
        {
            if(j<=n)
                miN=min(ar[j],miN);
            else break;
        }
        cout<<miN<<" ";
    }
    return 0;
}
