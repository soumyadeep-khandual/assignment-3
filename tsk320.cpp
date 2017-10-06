#include <iostream>

using namespace std;


int main() {
	
         float x,B,H,D,G;
	
         cout<<"Enter your salary per annum:\n";
	
         cin>>x;
	
         B=x/12;
	
         cout<<"Your basic salary per month=\n";
	
         cin>>B;
	
         if(B<=10000){
		
            H=B/5;
		
            D=4*B/5;
                
            G=B+H+D;
                
         cout<<" Gross salary="<<G;        
	
         } else if(B>10000&&B<=20000){
		
            H=B/4;
		
            D=9*B/10;
               
            G=B+H+D;
                
         cout<<"Gross salary="<<G; 
	
         } else if(B>20000){
		
            H=3*B/10;
		
            D=95*B/100;
                
            G=H+B+D;
		
         cout<<"Gross salary="<<G;
	
         } else {
		
         cout<<"Invalid number";
	
         }
	
return 0;

}

