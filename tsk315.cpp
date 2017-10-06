#include<iostream>
using namespace std;
int main()

{
float a,b,c,d,e;

cout<<"enter length of 1st side\n";
cin>>a;
cout<<"enter length of 2nd side\n";
cin>>b;
cout<<"enter length of 3rd side\n";
cin>>c;
if(a>0&&b>0&&c>0&&a+b>c&&b+c>a&&c+a>b)
{
cout<<"the triangle is possible\n"
;}
else {cout<<"triangle not possible\n";}

return 0;
}
