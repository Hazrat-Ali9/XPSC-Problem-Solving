#include<bits/stdc++.h>// link >>> https://toph.co/s/1162989
using namespace std;
vector<int> fre_cont(string s)
{
    vector<int>fre(26,0);
    for(int i=0; i<s.size(); i++)fre[s[i]-'a']++;
    return fre;
}
bool coustom_comparetor(vector<int>a,vector<int>b)
{
    for(int i=0; i<26; i++)
    {
        if(a[i]==b[i])continue;
        return a[i]<b[i];
    }

}
int main()
{
    int n,q;
    cin>>n;
    vector<vector<int>>ar;// here i will store all the frequency array of (a-z)counting
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        ar.push_back(fre_cont(s));
    }
    ///  sort(ar.begin(),ar.end());/// it works with built in sort function
    sort(ar.begin(),ar.end(),coustom_comparetor);/// this is how the stl sort function now it is not a black box to you
//    for(auto i:ar)
//    {
//        for(auto j:i)cout<<j<<" ";
//        cout<<endl;
//    }
    cin>>q;
    while(q--)
    {
        string qi;
        cin>>qi;
        vector<int>now =  fre_cont(qi);
        int lo=0,hi = n-1;
        bool flag = true;
        for(int i=0; i<26; i++)
        {
            int amar_count = now[i];
            int l=lo,r=hi;
            int ans1=-1;
            while(l<=r)
            {
                int mid= l+(r-l)/2;
                if(ar[mid][i]==amar_count)// is the array where i store all the frequency array
                {
                    ans1 = mid;
                    r=mid-1;
                }
                else if(ar[mid][i]>amar_count)r= mid-1;
                else  l=mid+1;
            }
            if(ans1==-1)
            {
                flag=false;
                break;
            }
            lo = ans1;
            l=lo,r=hi;
            int  ans2=-1;
            while(l<=r)
            {
                int mid= l+(r-l)/2;
                if(ar[mid][i]==amar_count)// is the array where i store all the frequency array
                {
                    ans2 = mid;
                    l=mid+1;
                }
                else if(ar[mid][i]>amar_count)r= mid-1;
                else  l=mid+1;
            }
            hi = ans2;
        }
        if(flag)cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}
