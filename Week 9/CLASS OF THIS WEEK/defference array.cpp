#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[] = {2,3,4,5,6,7,8};//this the array on which we are gonna do the operation
    int sz = sizeof(ar)/sizeof(ar[0]);
    int def_ar[sz+1]= {0};// it will act as auxiliary array
    vector<vector<int>> query;// we have total 3 query and etch query is made with three int (l,r,v) we  have add v all ar[i] between range l and r. And after preforming all the queries  our task is print the final array
    query.push_back({0,3,2});
    query.push_back({1,5,1});
    query.push_back({4,6,3});
    for(auto i:query)
    {
        int l = i[0];
        int r = i[1];
        int v = i[2];
        def_ar[l]+=v;
        def_ar[r+1]-=v;
    }
    for(int i=0; i<=sz; i++)if(i!=0)def_ar[i]+=def_ar[i-1];
    for(int i=0; i<sz; i++)cout<<ar[i]+def_ar[i]<<" ";// it will the print the final array
    return 0;
}
