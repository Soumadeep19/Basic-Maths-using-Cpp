#include <iostream>
#include<math.h>
using namespace std;

int countDigits1(int n)  //bruteforce approach
{
     
    if (n == 0) {return 1;}   // Special case: 0 has 1 digit
    if (n < 0)  {n = -n;}     // Handle negative numbers
    
    
    int cnt = 0;
    while (n > 0)
    {
        n = n / 10;
        cnt++;
    }
    return cnt;
}


int countDigits2(int n)  //optimal approach
{
    if (n == 0) return 1; // special case
    if (n < 0) n = -n;    // handle negatives

    
    int cnt= (int)(log10(n)+1);
    return cnt;
}
int main()
{
    int n;
    cout << "Enter the number:\n";
    cin >> n;
    int val = countDigits2(n);
    cout << "No of digits are:-\n"<< val;
}