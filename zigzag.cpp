#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for (int i = 0; i <3; i++)
    {
    for (int j= 0; j<9; j++)
    {
        if ((i+j)%2==0 )
        {
        if(i==0&&j==4||i==2&&j==2||i==0&&j==0||i==0&&j==8||i==2&&j==6)
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
    
}