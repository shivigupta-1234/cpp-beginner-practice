#include <iostream>
using namespace std;
// find the value of nCr where value of n and r are entered by the user
/*nCr-->
    n!/r!(n-r)!
    */

int binomial_coefficient(int n, int r)
{
    int factorial1 = 1, factorial2 = 1, factorial3 = 1;
    ;
    for (int i = 1; i <= n; i++)
    {
        factorial1 *= i;
    }
    int numerator = factorial1;
    for (int j = 1; j <= n - r; j++)
    {
        factorial2 *= j;
    }
    for (int k = 1; k <= r; k++)
    {
        factorial3 *= k;
    }
    int denominator = factorial2 * factorial3;
    int result_binomial = numerator / denominator;
    return result_binomial;
}

int prime(int n)
{
    int primeNum = 0;
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            primeNum++;
        }
    }
    return primeNum;
}
// find the number of prime numbers from 1 to N
int main()
{
    cout << "#### CODE TO FIND THE VALUE OF nCr ####" << endl;
    int n, r;
    cout << "enter the value of n : ";
    cin >> n;
    cout << "enter the value of r : ";
    cin >> r;
    if (n < 0 || r < 0)
    {
        cout << "please enter positive values!!!!" << endl;
    }
    else if (n < r)
    {
        cout << "!!!! value of n should be greater or equal to value of r !!!!";
    }
    else
    {
        int result = binomial_coefficient(n, r); // function calling
        cout << "the value of " << n << "C" << r << " is : " << result << endl;
    }
    cout << "\n---- CODE TO FIND THE NUMBER OF PRIME NUMBERS FROM 1 TO N ----" << endl;
    int N;
    cout << "\nenter the number upto which you want to find prime number : ";
    cin >> N;
    if (N < 0)
    {
        cout << "please enter positive values!!!!" << endl;
    }

    int result = prime(N);
    cout << "The number of prime number upto " << N << " is : " << result;
    return 0;
}