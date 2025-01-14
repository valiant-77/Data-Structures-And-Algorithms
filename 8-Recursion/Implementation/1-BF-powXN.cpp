#include <iostream>
using namespace std;

double powe(double x, int n)
{
    double prod = 1; 
    int abs_n = abs(n); // Compute the absolute value of n

    // Compute x^|n| using a loop
    for (int i = 1; i <= abs_n; i++)    
    {
        prod = prod * x;
    }
    
    // If n is negative, return 1/prod
    if (n < 0)
        return 1 / prod;
    
    return prod;
}

int main()
{
    int n = -3; // Example: negative power
    double x = 2;
    cout << powe(x, n); // Should output 0.125 (1 / 2^3)
  
    return 0;
}
