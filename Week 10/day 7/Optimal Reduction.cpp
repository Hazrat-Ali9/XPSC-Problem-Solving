/// link >> https://codeforces.com/contest/1713/problem/B
#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int ind;
    int m=0;
    vector<int>ar(n);
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        if(ar[i]>m)
        {
            m=ar[i];
            ind = i;
        }
    }
    int flag = 1;
    for(int i=ind+1; i<n-1; i++)if(ar[i]<ar[i+1]){flag=0;break;}
    for(int i=ind-1; i>0; i--)if(ar[i]<ar[i-1]){flag=0;break;}
    if(flag)cout<<"YES\n";
    else cout<<"NO\n";
}
    return 0;
}
