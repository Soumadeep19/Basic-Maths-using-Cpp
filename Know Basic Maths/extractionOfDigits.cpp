//#include <bits/stdc++.h>

#include<iostream>
using namespace std;

void extractionOfDigits(int n)
{
    while (n > 0)
    {
        cout << n % 10 << endl;
        n = n / 10;
    }
}

int main()
{
    int n;
    cout << "Enter the digit\n";
    cin >> n;
    cout << "The numbers are:- \n";
    extractionOfDigits(n);
}
