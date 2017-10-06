#include <iostream>
#include<cmath>
using namespace std;
int main()
{
int a,b=1,c=1,d=1,e,f,x,y;
cout<<"to swap 1st & last of digits in the number __\n";
cin>>a;
if (a>=0){a=a;}
else{a=-a;}
while (c>0)

{

c=a/d;
d=pow(10,b);
b=b+1;

}
if (a==0){e=1;}
else
{
e=b-3;}
f=pow(10,e);
x=a/f; 
y=a%10;
cout<<"new number = "<<a-y-(x*pow(10,b-3))+x+(y*pow(10,b-3))<<endl;

return 0;
}
