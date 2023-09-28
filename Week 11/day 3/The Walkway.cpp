/// https://codeforces.com/contest/1858/submission/219543573
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,d;
        cin>>n>>m>>d;
        vector<int>ar;
        ar.push_back(1);
        int flag = 0;
        for(int i=1; i<=m; i++)
        {
            int x;
            cin>>x;
            if(x==1)flag=1;
            ar.push_back(x);
        }
        sort(ar.begin(),ar.end());
        if(ar[1]==1) ar.erase(ar.begin());
        int sum=ar.size();
        for(int i=0; i<ar.size(); i++)
        {
            if(i<ar.size()-1)
            {
                int now = (ar[i+1]-ar[i]-1)/d;
                if(now>0)sum+=now;
            }
            else
            {
                int now = (n-ar[i])/d;
                if(now>0)sum+=now;
            }
        }
        vector<int>ans;
        for(int i=1; i<ar.size(); i++)
        {
            if(i<ar.size()-1)
            {
                // with the current seller
                int suM1=3;
                int lef=(ar[i]-ar[i-1]-1)/d;
                int ri=(ar[i+1]-ar[i]-1)/d;
                if(lef>0)suM1+=lef;
                if(ri>0)suM1+=ri;
                // without the current seller
                int suM2=2;
                int mid=(ar[i+1]-ar[i-1]-1)/d;
                if(mid>0)suM2+=mid;
                int def = suM1-suM2;
                if(def>=0)ans.push_back(sum-def);
            }
            else
            {
                // with the current seller
                int suM1=2;
                int lef=(ar[i]-ar[i-1]-1)/d;
                int ri=(n-ar[i])/d;
                if(lef>0)suM1+=lef;
                if(ri>0)suM1+=ri;
                // without the current seller
                int suM2=1;
                int mid=(n-ar[i-1])/d;
                if(mid>0)suM2+=mid;
                int def = suM1-suM2;
                if(def>=0)ans.push_back(sum-def);
            }
        }
        if(flag) ans.push_back(sum);
        sort(ans.begin(),ans.end());
        int a = ans[0];
        int x=0;
        for(int i=0; i<ans.size(); i++)if(ans[i]==a)x++;
        cout<<a<<" "<<x<<endl;
    }
    return 0;
}