// link    https://www.codechef.com/problems/CANDYSTORE

#include <iostream>
using namespace std;
int main()
{
    int  t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        if(s<=n)cout<<s<<endl;
        else cout<<n+(s-n)*2;
        cout<<endl;
    }
    return 0;
}
