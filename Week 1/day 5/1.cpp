#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int Even=0,Odd=0,Positive=0,Negative=0;
    cin>>n;
    for(int j=1; j<=n; j++)
    {
        int i;
        cin>>i;
        if(abs(i)>=2 && i%2==0 || i==0)Even++;
        else Odd++;
        if(i>0)Positive++;
        else  if(i<0) Negative++;

    }
    cout<<"Even: "<<Even<<endl<<"Odd: "<<Odd<<endl<<"Positive: "<<Positive<<endl<<"Negative: "<<Negative<<endl;
    return 0;
}
