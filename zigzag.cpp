#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    for (int i = 1; i <=3; i++)//i represent the row number 
    {
    for (int j= 1; j<=9; j++)//j represent the column number 
    {
        if ((i+j)%2==0 )
        {
        if(i==1&&j==5||i==3&&j==3||i==1&&j==1||i==1&&j==9||i==3&&j==8)
           {
            cout<<"  ";
           }
           else{
            cout<<"* ";
           }
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
    }
    return 0;
}
