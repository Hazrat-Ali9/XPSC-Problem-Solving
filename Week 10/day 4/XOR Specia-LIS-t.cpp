// link >> https://codeforces.com/contest/1604/submission/218688298
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void solve(){ll n;cin>>n;bool flag=0;ll past;ll x;for(ll i=1; i<=n; i++){cin>>x;if(i!=1 && past >=  x)flag = 1;past = x;}if(flag==1 || n%2==0)yes;else no;}int main(){Faster ;ll t = 1;cin>>t;while(t--)solve();return 0;}
