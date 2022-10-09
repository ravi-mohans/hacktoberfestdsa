#include<iostream>
using namespace std;
int main()
{
    int i;
for (int i= 0; i <4; i++)
{
for (int j= 0; j <3-i; j++)
{
    cout<<"  ";
}
for (int j= 0; j<i+1; j++)
{
    cout<<char(65+j)<<" ";
}
cout<<endl;
}
for (int i =3; i>=0; i--)
{
for (int j=0; j<i; j++)
{
    cout<<char(67-j)<<" ";
 }
cout<<endl;
}
return 0;
}