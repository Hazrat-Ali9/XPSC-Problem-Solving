#include<bits/stdc++.h>
using namespace std;
vector<long long int>ar;
void dfs(long long int n,long long int n1,long long int n2);
int main()
{
    long long int a,b;
    cin>>a>>b;
    dfs(4,a,b);
    dfs(7,a,b);
    sort(ar.begin(),ar.end());
    if(ar.size())for(auto i:ar)cout<<i<<" ";
    else cout<<-1;
    return 0;
}

void dfs(long long int n,long long int n1,long long int n2)
{
    queue<long long int>q;
    q.push(n);
    while(q.size())
    {
        long long int head =q.front();
        q.pop();
        while(head>n2 && q.size())
        {
            head =q.front();
            q.pop();

        }
        if(head>=n1 && head<=n2)
            ar.push_back(head);

        if(head*10 +4 <= n2)
            q.push(head*10 +4);
        if(head*10 +7 <=n2)
            q.push(head*10 +7);
    }
    return ;
}
