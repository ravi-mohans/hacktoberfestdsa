#include<iostream>
using namespace std;
int main()
{

    for(int i=0;i<5;i++)
    {
        int space=4-i;
     for (int j=0;j<space;j++)
     {
        cout<<"  ";
     }
    for(int j=0;j<5;j++)
    {
        cout<<"* ";
    }
    cout<<endl;
    }

}  