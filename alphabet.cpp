#include<bits/stdc++.h>//contains all the library in it so use this
using namespace std;
int main()
{
    for (int i =0; i<5; i++)
    {
     for (int j=4; j>=0; j--)
     {
        if (i>=j)
        {
            cout<<char(69-j)<<" ";//we use 69 because its char i teger of alphabets
            
        }
        }
        cout<<endl;
     }
   return 0;
    }
