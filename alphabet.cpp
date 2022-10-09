#include<iostream>
using namespace std;
int main()
{
    for (int i =0; i<5; i++)
    {
     for (int j=4; j>=0; j--)
     {
        if (i>=j)
        {
            cout<<char(69-j)<<" ";
            
        }
        }
        cout<<endl;
     }
   return 0;
    }
