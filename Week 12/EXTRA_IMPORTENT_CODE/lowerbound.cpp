


#include<bits/stdc++.h>
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    Faster ;
    vector<int>ar = {3,5,5,6,4,1,4,3};
    sort(ar.begin(),ar.end());//1 3 3 4 4 5 5 6
    vector<int>::iterator ii;
    ii = lower_bound(ar.begin(),ar.end(),4);
    cout<<ii-ar.begin();

    return 0;

}
