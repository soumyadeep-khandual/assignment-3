#include<iostream>
using namespace std;
int main(){
    int i,j,c,l,e,f,sum;
    cout<<"Enter a number till which you want the strong numbers :\n";
    cin>>e;
    cout<<"All strong numbers between 1 and "<<e<<" are \n";
    for(i=1; i<=e; i++)
    {
        c = i;
        sum=0;
        while(c > 0)
        {
            f = 1ll;
            l = c % 10;
            for( j=1; j<=l; j++)
            {
                f = f * j;
            }
            sum = sum + f;
            c = c / 10;
        }

        if(sum == i)
        {
           cout<<i<<endl;
        }
    }
 return 0;

}









