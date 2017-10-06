#include <iostream>
using namespace std;
int main()
{
int a,b=0,c;
cout<<"print multiplication table for ";
cin>>a;

while (b<=9)
{

b=b+1;c=a*b;
cout <<a<<" x "<<b<<" = "<<c<<endl;

}
return 0;
}
