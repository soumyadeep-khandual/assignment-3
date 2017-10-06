#include <iostream>
#include<cmath>
using namespace std;
int main()
{
int a,c=1,e=0;
cout<<"check if the number __ is a palendrome or not...\n";
cin>>a;
if (a>=0){a=a;}
else{a=-a;}
while (c>0)

{
c=a/10;e=10*e+a%10;
a=(a-a%10)/10;

}
if(a==e)
cout<<"the number is a palendrome"<<endl;
else
cout<<"the number is not a palendrome"<<endl;
return 0;
}
