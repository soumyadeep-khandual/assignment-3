#include<iostream>
using namespace std;
int main(){
    int num,i=1,sum=0;
    cout << "Enter a number: ";
    cin >> num;
       while(i<num){
       if(num%i==0)
       sum=sum+i;
       i++;
  }
  if(sum==num){
    cout << i << " is a perfect number\n";
  }else{
    cout << i << " is not a perfect number\n";
  }
 return 0;

}









