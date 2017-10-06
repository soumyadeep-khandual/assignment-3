#include<iostream>
using namespace std;
int main()
{
   int num,i,fac=1;
   cout<<"Enter any positive integer :\n";
   cin>>num;
   for(i=1;i<=num;++i){
    fac=fac*i;
   } cout<<"The factorial of "<<num<<" = " <<fac;
   return 0;
}
