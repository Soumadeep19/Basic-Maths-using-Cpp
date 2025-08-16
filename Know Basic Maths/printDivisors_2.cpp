#include <bits/stdc++.h>

using namespace std;

void printDivisors2(int n)
{

    vector<int> ls;   // defines a vector of type (int) named ls.


    // T.C. for this loop -  O(sqrt(n))
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);       // element pushed into the vector named ls.

            if ((n / i) != i)

                ls.push_back(n / i);
        }
    }
  

    //T.C. for sort funtion - O(N*logN)   ///Here, N = No of factors.
    sort(ls.begin(), ls.end());    // for sorting the vector named ls.


    //T.C. for the below loop of printing - O(N)
    for (auto it : ls)             // for printing the sorted values stored in vector.
    {
        cout << it << " ";
    }


}

int main()
{
    int n;
    cout << "Enter the Number\n";
    cin >> n;
    cout << "The Divisors in sorted order are:- \n";
    printDivisors2(n);
}