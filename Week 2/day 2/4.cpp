#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>ar)
{
    if(ar[0]==ar[1] && ar[1]==ar[2])return 1;
    if(ar[0]!=ar[1] && ar[1]!=ar[2])return 6;
    return 3;
}

int main()
{
    int s,t;
    cin>>s>>t;
    vector<int>ar;
    for(int i=0; i<=s; i++)ar.push_back(i);
    sort(ar.begin(),ar.end());
    vector<vector<int>>ar2;
    for(int i=0; i<ar.size(); i++)
    {
        int num = ar[i];
        if(num*3 <= s && pow(num,3)<=t)
        {
            ar2.push_back({num,num,num});
            for(int j=i+1; j<ar.size(); j++)
            {
                if(num*2 +ar[j] <= s && pow(num,2)*ar[j]<=t)
                {
                    ar2.push_back({num,num,ar[j]});
                    if(num  + ar[j]*2 <= s && pow(ar[j],2)*num<=t)
                    {
                        ar2.push_back({num,ar[j],ar[j]});
                        for(int k=j+1; k<ar.size(); k++)
                        {
                            if(num + ar[j] + ar[k] > s || num*ar[j]*ar[k]>t)break;
                            else ar2.push_back({num,ar[j],ar[k]});
                        }
                    }
                }
            }
        }
    }
    int res =0;
    for(auto i:ar2)
        res+=solve(i);
    cout<<res;
    return 0;
}
