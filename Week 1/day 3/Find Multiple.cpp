#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a>>b>>c;
    int num1,num2;
    num2=max(a,b);
    num1 =min(a,b);
    if(num2==c)
    {
        cout<<c;
        return 0;
    }
    if(num2<c)
    {
        cout<<-1;
        return 0;
    }

    if(num1<c)num1=c;
    for(int i=num1; i<=num2; i++)
    {
        if(i%c==0)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}
