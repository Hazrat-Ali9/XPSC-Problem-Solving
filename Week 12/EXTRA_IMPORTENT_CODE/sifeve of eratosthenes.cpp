#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N=30;
    int ar[N+5]= {0};
    ar[1]=1;
    for(int i=2; i<=floor(sqrt(N)); i++)
        if(ar[i]==0)
            for(int j=2; i*j<=N; j++)
                ar[i*j]=1;
    for(int i=1; i<=N; i++)cout<<i<<" - "<<ar[i]<<endl;// if 1 it is not prime.
    return 0;
}
