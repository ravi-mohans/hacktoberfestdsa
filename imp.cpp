#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for (int i = 0; i <4; i++)
    {
    for (int j= 0; j<i+1; j++)
    {
        cout<<j+1<<" ";
    }
    for (int j = 0; j<6-2*i; j++)
    {
        cout<<"  ";
    }
    for (int j=i+1; j>0; j--)
    { 
        cout<<j<<" ";
    }
    cout<<endl;
    }
}