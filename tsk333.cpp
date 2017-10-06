#include <iostream>
#include<cmath>
using namespace std;
int main()
{
int a,b=1,c=1,d=1,e,f;
cout<<"print sum of 1st & last digits of the number __\n";
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
cout<<"the first digit = "<<a/f<<endl; 

cout<<"the last digit = "<<a%10<<endl;

cout<<"the sum of 1st & last digit = "<<(a/f)+(a%10)<<endl;

return 0;
}
