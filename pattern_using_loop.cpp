#include <iostream>
using namespace std;
/*
draw the pattern by using loop
1--> pattern like-->
*****
****
***
**
*

2-->pattern like-->
         *
        ***
       *****
      *******
     *********
*/

void pattern1(void)
{
    int rows, columns;
    cout << "ENTER THE ROWS IN WHICH YOU WANT THE PATTERN " << endl;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        // to print the pattern with the help of character (*)
        for (int star = 0; star < rows - i; star++)
        {
            cout << "*"; // enter the symbols or any character you want to use in pattern
        }

        cout << endl;
    }
}

void pattern2(void)
{
    int rows;
    cout << "ENTER THE NUMBER OF ROWS YOU WANT TO PRINT THE PATTERN" << endl;
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        // for providing the space
        for (int space = 0; space < rows - i - 1; space++)
        {
            cout << " ";
        }

        // for using the character (*) to draw the pattern
        for (int star = 0; star < (2 * i + 1); star++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    int choice = 0;
    cout << "1-->to draw the pattern 1." << endl;
    cout << "2-->to draw the pattern 2." << endl;

    cout << "Enter your choice " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n THE PATTERN IS \n";
        pattern1();
        break;
    case 2:
        cout << "\n THE PATTERN IS \n";
        pattern2();
        break;

    default:
        cout << "No such choice is available" << endl;
    }

    return 0;
}