#include<bits/stdc++.h>
using namespace std;
int ar[4][4];
void bord_printer();
int  winer_chaker();
int main()
{
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            ar[i][j]=0;
        }
    }

    bord_printer();
    cout<<endl;
    int p1m=0;
    int p2m=0;

    while(1)
    {
        int x1,y1;
flag1:
        cout<<"Enter Row and Column for Player_1>>";
        cin>>x1>>y1;
        if(ar[x1][y1]!=0) goto flag1;
        else if(x1<1 || x1>3 || y1<1 || y1>3 )goto flag1;
        else
        {
            p1m++;
            ar[x1][y1]=1;
            bord_printer();
            if(winer_chaker())
            {
                cout<<"CONGRATULATIONS PLAYER"<<'_'<<winer_chaker() <<" !!! YOU WON THE GAME !\n";
                return 0;
            }

        }


        int x2,y2;
flag2:
        cout<<"Enter Row and Column for Player_2>>";
        cin>>x2>>y2;
        if(ar[x2][y2]!=0)goto flag2;
        else if(x2<1 || x2>3 || y2<1 || y2>3 )goto flag1;
        else
        {
            p2m++;
            ar[x2][y2]=2;
            bord_printer();
            if(winer_chaker())
            {
                cout<<"CONGRATULATIONS PLAYER"<<'_'<<winer_chaker() <<" !!! YOU WON THE GAME !\n";
                return 0;
            }
        }


        if(p1m+p2m>=6)
        {
            cout<<"GAME OVER PLEASE RESTART THE GAME\n";
            return 0;
        }
    }
    return 0;
}

void bord_printer()// this function will print the cell after etch move
{
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            if(ar[i][j]==0)
                cout<<" ";
            else if(ar[i][j]==1)
                cout<<"O";
            else if(ar[i][j]==2)
                cout<<"X";
            if(j<3)cout<<"    |    ";
        }
        cout<<endl;
        if(i<3)cout<<"-----------------------------";
        cout<<endl;
    }
}

int  winer_chaker()
{
    if(ar[1][1]==ar[1][2] && ar[1][2]==ar[1][3]) return ar[1][1];
    if(ar[2][1]==ar[2][2] && ar[2][2]==ar[2][3]) return ar[2][1];
    if(ar[3][1]==ar[3][2] && ar[3][2]==ar[3][3]) return ar[3][1];


    if(ar[1][1]==ar[2][1] && ar[2][1]==ar[3][1]) return ar[1][1];
    if(ar[1][2]==ar[2][2] && ar[2][2]==ar[3][2]) return ar[1][2];
    if(ar[1][3]==ar[2][3] && ar[2][3]==ar[3][3]) return ar[1][3];

    if(ar[1][1]==ar[2][2] && ar[2][2]==ar[3][3]) return ar[1][1];
    if(ar[1][3]==ar[2][2] && ar[2][2]==ar[3][1]) return ar[1][3];
    return 0;
}
