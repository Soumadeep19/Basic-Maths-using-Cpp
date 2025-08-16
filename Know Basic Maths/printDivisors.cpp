#include <iostream>
using namespace std;

int printDivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter the Number\n";
    cin >> n;
    cout << "The Divisors in sorted order with T.C :-  O(n) are:- \n";
    printDivisors(n);
}