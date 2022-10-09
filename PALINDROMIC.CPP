#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for (int i = 0; i<5; i++)
    {
    for (int j= 0; j<4-i; j++)
    {
        cout<<"  ";
    }
    int k=i;
    for (int j= 0; j<i+1; j++)
    {
        cout<<k+1<<" ";
        k--;
    }
    k=2;
    for (int j= 0; j<i; j++)
    {
        cout<<k<<" ";
        k++;
    }
    
    cout<<endl;
    }
    
}