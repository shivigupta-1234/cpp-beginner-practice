#include <iostream>
using namespace std;
int even_odd()
{
    int a;
    cout << "enter the first value" << endl;
    cin >> a;
    if (a % 2 == 0)
        cout << "the given number is even" << endl;
    else
        cout << "the given number is odd" << endl;
    return 0;
}

int largest_number()
{
    int a, b, c;
    cout << "enter the first number" << endl;
    cin >> a;
    cout << "enter the second value" << endl;
    cin >> b;
    cout << "enter the third value" << endl;
    cin >> c;
    if (a > b && a > c)
        cout << "the first number is largest" << endl;
    else if (b > a && b > c)
        cout << "the second number is largest" << endl;
    else
        cout << "the third number is largest" << endl;
    return 0;
}

int calculator()
{
    int a, b, i;
    cout << "1->sum" << endl;
    cout << "2->subtract" << endl;
    cout << "3->multiply" << endl;
    cout << "4->divide" << endl;
    cout << "Enter your choice" << endl;
    cin >> i;
    cout << "enter the value of first number" << endl;
    cin >> a;
    cout << "enter the value of second number" << endl;
    cin >> b;
    switch (i)
    {
    case 1:
        cout << "the summation of two numbers is" << a + b << endl;
        break;
    case 2:
        cout << "the subtraction of two numbers is" << a - b << endl;
        break;
    case 3:
        cout << "the multiplication of two numbers is" << a * b << endl;
        break;
    case 4:
        if (b == 0)
            cout << "the denominator should not be zero" << endl;
        else
            cout << "the division of two numbers is" << a / b << endl;
        break;
    default:
        cout << "no such choice is available" << endl;
    }
    return 0;
}

int grade()
{
    int marks;
    cout << "enter the number you achieved out of 100" << endl;
    cin >> marks;
    if (marks >= 90)
        cout << "CONGRATS!! YOU ACHIEVED A+ GRADE" << endl;
    else if (marks >= 80 && marks < 90)
        cout << "YOU ACHIEVED A GRADE" << endl;
    else if (marks >= 60 && marks < 80)
        cout << "YOU ACHIEVED B GRADE" << endl;
    else if (marks >= 40 && marks < 60)
        cout << "YOU ACHIEVED C GRADE" << endl;
    else
        cout << "YOU NEEDS IMPROVEMENT" << endl;
    return 0;
}

int table()
{
    int n;
    cout << "enter the number of which you want table" << endl;
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << n * i << endl;
    }
    return 0;
}
int sum()
{
    int i = 1, n;
    cout << "enter the number upto which you want to find the sum" << endl;
    cin >> n;
    int sum = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << "the sum of all numbers upto this is" << sum << endl;
    cout << "THANK YOU" << endl;
    return 0;
}
int factorial()
{
    int a, factorial = 1;
    cout << "enter the number of which you wants factorial" << endl;
    cin >> a;
    if (a < 0)
        cout << "the number should be positive" << endl;
    else
        for (int i = 1; i <= a; i++)
        {
            factorial *= i;
        }
    cout << "the factorial of the number is" << endl;
    cout << factorial;
    return 0;
}
int reverse()
{
    int num, reverse = 0, rem;
    cout << "enter the number of which reverse you want" << endl;
    cin >> num;
    while (num != 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }
    cout << "the reverse of the number num is" << reverse << endl;
    cout << "****thank you****" << endl;
    return 0;
}

int countdigit()
{
    int num;
    cout << "enter the digits you want" << endl;
    cin >> num;
    int count = 0;
    if (num == 0)
        count = 1;
    else
        while (num != 0)
        {
            num /= 10;
            count += 1;
        }
    cout << "the digits are in the given number is" << endl;
    cout << count;
    return 0;
}
int prime()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if (a <= 1)
    {
        cout << "The number is neither prime nor composite." << endl;
        return 0;
    }

    int count = 0;

    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
            count++;
    }

    if (count == 2)
        cout << "The number is prime." << endl;
    else
        cout << "The number is composite." << endl;

    return 0;
}

int main()
{
    int i;
    cout << "1->EVEN_ODD" << endl;
    cout << "2->LARGEST OF THE THREE NUMBERS" << endl;
    cout << "3->CALCULATOR" << endl;
    cout << "4->CALCULATE YOUR GRADE" << endl;
    cout << "5->TABLE OF ANY NUMBER" << endl;
    cout << "6->SUM OF ALL DIGITS UPTO A TAKEN NUMBER" << endl;
    cout << "7->FIND THE FACTORIAL OF ANY NUMBER" << endl;
    cout << "8->TO FIND THE REVERSE OF THE GIVEN NUMBER" << endl;
    cout << "9->TO COUNT THE DIGITS OF THE GIVEN NUMBER" << endl;
    cout << "10->TO FIND WHETHER THE GIVEN NUMBER IS PRIME OR NOT" << endl;
    cout << "enter your choice" << endl;
    cin >> i;
    switch (i)
    {
    case 1:
        even_odd();
        break;
    case 2:
        largest_number();
        break;
    case 3:
        calculator();
        break;
    case 4:
        grade();
        break;
    case 5:
        table();
        break;
    case 6:
        sum();
        break;
    case 7:
        factorial();
        break;
    case 8:
        reverse();
        break;
    case 9:
        countdigit();
        break;
    case 10:
        prime();
        break;
    default:
        cout << "no such choice is available" << endl;
    }
    cout << "\n\n****----THANK YOU FOR CHOOSING----****\n\n"
         << endl;
    return 0;
}