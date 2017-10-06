#include<iostream>
using namespace std;
int main()
{
    int num,i,l=0;
    cout << "Enter any natural number: ";
    cin >> num;
    for(i=1; i<=num; ++i)
    {
        if(num % i == 0)
        {
            l++;
        }
    } if(l==2){
            cout<<"The number is prime.";
    } else{
            cout<<"The number is not prime.";
    }
   return 0;
}
