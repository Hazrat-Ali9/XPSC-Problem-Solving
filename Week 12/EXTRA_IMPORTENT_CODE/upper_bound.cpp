#include<bits/stdc++.h>
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    Faster ;
    vector<int>ar= {2,4,5,4,3,2,1,5,43,3};
    sort(ar.begin(),ar.end()); //1 2 2 3 3 4 4 5 5 43
    vector<int>::iterator ii;
    ii = upper_bound(ar.begin(),ar.end(),3);
    cout<<ii-ar.begin()<<endl;
    return 0;

}
