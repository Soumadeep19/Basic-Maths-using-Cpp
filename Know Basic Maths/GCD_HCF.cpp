#include <iostream>
#include <cmath>
using namespace std;

int gcd(int n1, int n2)        // Brute-Force/Naive Approach :-  T.C.:- O(min(n1,n2)).
{

    int gcd = 1;
    for (int i = 1; i <= min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

int gcd2(int n1, int n2)        // Euclidean Algorithm:  O(log(min(n1, n2)))
{
    while (n1 > 0 && n2 > 0) 
    {
        if (n1 > n2) {
            n1 = n1 % n2;
        } else {
            n2 = n2 % n1;
        }
    }

    // One of them will be 0 → return ; the other (the GCD).
    if (n1 == 0) return n2;
    return n1;
}

int main()
{
    int n1, n2;
    cout << "Enter the first number" << endl;
    cin >> n1;
    cout << "Enter the Second Number" << endl;
    cin >> n2;
    int val = gcd2(n1, n2);
    cout << "GCD/HCF is " << val;
    return 0;
}