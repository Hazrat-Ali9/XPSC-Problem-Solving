vector<ll> bia(ll n)
{
    vector<ll>ans;
    while(n>0)
    {
        ans.push_back(n&1);
        n=n>>1;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}


    ll sum =  0;
    reverse(ar.begin(),ar.end());
    for(ll i=0; i<32; i++)if(ar[i])sum+= (1<<i);