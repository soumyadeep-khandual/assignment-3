#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int a,b,c=0,d;
cout<<"to find a^b\n"<<"enter base(a)\n";
cin>>a;
cout<<"enter power(b)\n";
cin>>b;
d=1/a;
if(b>=0)
{
while (c<=b)
{
a=a*a;
c++;
}
cout<<a<<endl;}
else
{
while (c<=b)
{
d=d*d;
c++;
}
cout<<d<<endl;}

return 0;
}
