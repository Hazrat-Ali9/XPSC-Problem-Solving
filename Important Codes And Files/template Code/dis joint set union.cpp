#include <bits/stdc++.h>
#define ll long long
using namespace std;
int par[100+5];
int leader_finder(int n)
{
    if(par[n]==-1)return n;
    return par[n]=leader_finder(par[n]);
}
void unioN(int a,int b)
{
    int  A = leader_finder(a);
    int B = leader_finder(b);
    if(A!=B)par[A]=B;
}
int main()
{
    memset(par,-1,sizeof(par));
    cout<<endl;
    unioN(2,1);
    unioN(2,3);
    unioN(3,4);
    unioN(5,6);
    unioN(7,9);
    unioN(7,8);
    for(int i=1; i<=9; i++)cout<<leader_finder(i)<<endl;
    return 0;
}
