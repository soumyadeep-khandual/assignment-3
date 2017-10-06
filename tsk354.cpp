#include<iostream>
using namespace std;
int main(){
    int n,i,j,sum=0;
    cout << "Enter a number till which you want perfect numbers:\n ";
    cin >> n;
    cout<<"The perfect numbers between 1 and "<<n<<" are :\n";
    for(i=1;i<=n;i++){
    sum=0;
    for(j=1;j<i;j++){
        if(i%j==0){
            sum=sum+j;
        }
    }if(sum==i){
    cout<<i<<endl;
  }
}
 return 0;

}









