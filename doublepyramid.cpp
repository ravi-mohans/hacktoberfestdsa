#include<iostream>
using namespace std;
int main()
{
     for(int i=0;i<4;i++)
    {
        int space=3-i;
        for(int j=0;j<space;j++)
        {
            cout<<"  ";
        }
        for(int j=0;j<(2*i)+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=3;i>0;i--)
    {
        int space=3-i;
        for(int j=0;j<space;j++)
        {
            cout<<"  ";
        }
        for(int j=0;j<(2*i)+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}