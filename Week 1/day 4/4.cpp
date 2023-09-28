#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l=1;
    int r=n;
    for(int i=1; i<=n/2; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(j==l)printf("%c",92);
            else if(j==r)printf("%c",47);
            else
                cout<<'*';
        }
        l++;
        r--;
        cout<<endl;
    }

    for(int j=1; j<=n; j++)
        if(j == n/2 +1)
            cout<<'X';
        else cout<<'*';
    cout<<endl;

    l=n/2 +2;
    r=n/2;

    for(int i=1; i<=n/2; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(j==l)printf("%c",92);
            else if(j==r)printf("%c",47);
            else
                cout<<'*';
        }
        l++;
        r--;
        cout<<endl;
    }

    return 0;
}
