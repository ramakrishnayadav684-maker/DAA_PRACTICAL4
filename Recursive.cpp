#include <iostream>
using namespace std;

long long factorialRecursive(int n)
{
    // Base condition
    if (n == 0 || n == 1)
        return 1;

    // Recursive condition
    return n * factorialRecursive(n - 1);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial using Recursive Method = "
         << factorialRecursive(n);

    return 0;
}
