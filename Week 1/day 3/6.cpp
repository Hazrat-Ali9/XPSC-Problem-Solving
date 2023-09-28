#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int  n,m;
    cin>>n>>m;
    int ar2d[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)cin>>ar2d[i][j];

    for(int i=0; i<n; i++)
    {

        for(int j=m-1; j>=0; j--)cout<<ar2d[i][j]<<" ";
        cout<<endl;
    }
}
int main()
{
    solve();
    return 0;

}
