#include<iostream>
using namespace std;

int reverseNumber(int n){
    
    bool isNegative = (n < 0);       // store sign for negative val  // either true or false.
    if(n<0)   n=-n;
    
    int revNo=0;
    while(n>0){
        int lastDigit=n%10;   
        revNo=(revNo*10)+lastDigit;
        n=n/10;
    }

    if (isNegative) revNo = -revNo;   // restore sign for negative val 
    return revNo;
}


int main(){
    int n;
    cout<<"Enter the number:\n";
    cin>>n;
    
    int val=reverseNumber(n);
    cout<<"Reverse number is:-\n"<<val;
    return 0;
}