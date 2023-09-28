#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>ar;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        ar.push_back(x);
    }
    while(ar.size())
    {
        if(ar.size())
        {
            cout<<ar[0]<<" ";
            ar.erase(ar.begin()+0);
        }
        if(ar.size())
        {
            cout<<ar.back()<<" ";;
            ar.pop_back();
        }





    }
    return 0;
}
