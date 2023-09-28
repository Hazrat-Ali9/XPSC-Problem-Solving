#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int  ar[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)cin>>ar[i][j];
    }
    int x;
    cin>>x;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(ar[i][j]==x)
            {
                cout<<"will not take number";
                return 0;
            }
        }
    }
    cout<<"will take number";
    return 0;
}
