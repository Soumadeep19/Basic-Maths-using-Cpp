#include <iostream>
#include <cmath>
using namespace std;

void primeNumber1(int n) // Brute-Force Approach :- T.C.:- O(n)
{
    int counter = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            counter++;
        }
    }
    if (counter == 2)
    {
        cout << "PRIME NUMBER";
    }
    else
        cout << "NOT A PRIME NUMBER";
}

void primeNumber2(int n)    //Optimized Approach :- T.C.:- O(sqrt(n))
{
    int counter = 0;
    int sq= sqrt(n);
    for (int i = 1; i <= sq; i++)
    {
        if (n % i == 0)
        {
            counter++;
            if (n / i != i)
            {
                counter++;
            }
        }
    }
    if (counter == 2)
        cout << "Prime Number" << endl;
    else
        cout << "Not a Prime Number" << endl;
}

int main()
{
    int n;
    cout << "ENTER THE NUMBER";
    cin >> n;
    primeNumber2(n);
    return 0;
}