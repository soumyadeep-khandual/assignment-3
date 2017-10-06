#include <iostream>
#include <cmath>
using namespace std;

int main(){
int num,a,b,c,sum=0,i=0;
cout<<"Enter any positive integer :\n";
cin>>num;
b=num;
c=num;
while (b!=0){
    b=b/10;
    i++;}
    i;
while (c!=0){
 a=c%10;
 sum=sum+pow(a,i);
 c=c/10;}
if(sum==num){
cout<<"The number "<<num<<" is an armstrong number. ";}
else {
cout<<"The number "<<num<<" is not an armstrong number.";}
return 0;
}





