#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float a,b,c,d,e,f ;
cout<<"to find the roots of the quadratic equation in one variable of the form\n(a)x^2+(b)x+(c)=0\nenter the coefficients x^2\n";
cin>>a;
cout<<"enter the coefficient of x\n";
cin>>b;
cout<<"enter the constant term\n";
cin>>c;
d=(b*b)-4*a*c;
e=sqrt((b*b)-4*a*c);
f=-b/a;
if (d>=0)
{
cout<<"the quadtratic equation has real roots\n";
if (d==0){cout<<"the quadratic equation has equal roots\n"<<f<<"\n";}
else{cout<<"the quadratic equation has distinct roots\n"<<(-b+e)/(2*a)<<endl<<(-b-e)/(2*a)<<endl;}
;}
else {cout<<"the quadratic equation has no real roots\n";}

return 0;
}
