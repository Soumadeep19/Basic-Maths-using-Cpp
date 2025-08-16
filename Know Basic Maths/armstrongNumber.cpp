#include <iostream>
#include <cmath>
using namespace std;

int armstrongNumber(int n)
{
    int sum = 0;
    int digits = 0;

    // Count digits
    int temp = n;
    while (temp > 0)
    {
        temp /= 10;
        digits++;
    }

    while (n > 0)
    {
        int lastdigit = n % 10;
        n = n / 10;
        sum = sum + pow(lastdigit, digits);
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the number\n";
    cin >> n;
    int val = armstrongNumber(n);

    if (val == n)
    {
        cout << n << " is a armstrong number" << endl;
    }
    else
    {
        cout << n << " is not a armstrong number" << endl;
    }
    return 0;
}
