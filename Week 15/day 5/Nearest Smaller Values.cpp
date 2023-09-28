#include <bits/stdc++.h>//// https://cses.fi/problemset/task/1645/
using namespace std;
#define ll long long
int main()
{
    stack<pair<ll,ll>>st;
    ll n;
    cin>>n;
    vector<ll>ar(n+1);
    for(ll i=1; i<=n; i++)cin>>ar[i];
    for(ll i=1; i<=n; i++)
    {
        ll now = ar[i];
        if(i==1)
        {
            cout<<0<<" ";
            st.push({now,i});
        }
        else
        {
            while(1)
            {
                if(st.top().first<now)
                {
                    cout<<st.top().second<<" ";
                    st.push({now,i});
                    break;
                }
                else
                {
                    st.pop();
                    if(st.empty())
                    {
                        cout<<0<<" ";
                        st.push({now,i});
                        break;
                    }

                }
            }

        }
    }
    return 0;
}
