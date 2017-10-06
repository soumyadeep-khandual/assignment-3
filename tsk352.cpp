#include <iostream>
#include <cmath>
using namespace std;
int main(){
int num,e,d,l,sum,i;
cout<<"Enter the number till which you want the armstrong numbers : ";
cin>>e;
cout<<"The numbers are\n";
for(i=1;i<=e;i++){
sum=0;
num=i;
d=(int)log10(num)+1;
while(num!=0){
l=num%10;
sum=sum+pow(l,d);
num=num/10;}
if(i==sum){
cout<<i<<endl;}
}
return 0;
}








