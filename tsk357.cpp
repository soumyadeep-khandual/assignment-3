#include<iostream>
using namespace std;
int main(){
     int n,a=0,b=1,next=0;

    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "The Fibonacci Series is given by: ";
    for (int i = 1; i <= n; ++i)
    {
        if(i == 1)
        {
            cout << " " << a;
            continue;
        }
        if(i == 2)
        {
            cout << b << " ";
            continue;
        }
        next = a + b;
        a = b;
        b = next;

        cout << next << " ";
    }
 return 0;

}









