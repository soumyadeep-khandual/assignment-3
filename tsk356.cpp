#include<iostream>
using namespace std;
int main(){
    int num,a,i,r,f,sum=0;
    cout<<"Enter any positive integer : \n";
    cin>>num;
    a=num;
    while (num!=0){
        i=1;
        f=1;
        r=num%10;
        while(i<=r){
            f=f*i;
            i++;
        } sum=sum+f;
        num=num/10;
    } if(sum==a){
    cout<<a<<" is a strong number.";
    } else {
    cout<<a<<" is not a strong number.";
    }
 return 0;

}









