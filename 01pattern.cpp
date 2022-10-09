#include<iostream>
using namespace std;
//i represent row number and j represent column number 
int main(){
    int i,j;
for(int i=0;i<7;i++)
{ 
for (int j= 0; j <7;j++)
{
if (i==0||i==6||j==0||j==6)
{
cout<<"4 ";
}
else
if (i==1||i==5||j==1||j==5)
{
cout<<"3 ";
}
else
if (i==2||i==4||j==2||j==4)
{
cout<<"2 ";
}
else
if (i==3&&j==3)
{
cout<<"1 ";
} 
}
cout<<endl;
}
return 0;
}
