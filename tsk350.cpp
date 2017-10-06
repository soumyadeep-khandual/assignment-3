#include<iostream>
using namespace std;
int main(){

int num,i=1,j,k;
cout<<"Enter a number :\n";
cin>>num;
cout<<"The prime factors are :\n";
while(i<=num){
k=0;
if(num%i==0){
j=1;
while(j<=i){
if(i%j==0)
k++;
j++;
}
if(k==2){
cout<<i<<endl;
   }
  }
i++;
 }
return 0;
}





