#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main() {
    char binaryNumber[100], onesComplement[100];
    int counter, error=0, digitCount;

    cout<<"Enter a Binary Number\n";
    cin>> binaryNumber;
    digitCount = strlen(binaryNumber);

 for(counter=0; counter < digitCount; counter++) {
        if(binaryNumber[counter]=='1') {
            onesComplement[counter] = '0';
        } else if(binaryNumber[counter]=='0') {
            onesComplement[counter] = '1';
        } else {
            cout<<"Error :( ";
            return 1;
        }
    }
    onesComplement[digitCount] = '\0';

    cout<<"Ones Complement: "<<onesComplement;

    return 0;
}












