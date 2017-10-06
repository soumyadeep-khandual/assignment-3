#include <iostream>
#include<cmath>
using namespace std;
int main()
{
int a,b=1,c=1,d=1;
cout<<"print number of digits in the number __\n";
cin>>a;
if (a>=0){a=a;}
else{a=-a;}
while (c>0)

{

c=a/d;
d=pow(10,b);
b=b+1;

}
if (a==0){cout<<"1\n";}
else
{
cout<<b-2<<endl;}
return 0;
}
