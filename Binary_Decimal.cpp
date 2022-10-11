#include <iostream>
#include <conio.h>
#include<math.h>

using namespace std;

int binToDec(int n)
{
    int a,c=0;
    int s=0;
    while(n>0)
    {
        a=n%10;
        s=s+a*pow(2,c++);
        n/=10;
    }
    return s;
}
int main()
{
    int n;
    cout<<"Enter a binary number to convert it into Decimal : ";
    cin>>n;
    cout<<"The Decimal form of "<<n<<"  is : "<<binToDec(n);
    return 0;
}