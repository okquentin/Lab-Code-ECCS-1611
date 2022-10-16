#include <iostream>

using namespace std;

int first_digit(int n);
int first_digit(int n)
{
    while (n >= 10)
    {
        n = n / 10;
    }
    return (n);
}

int last_digit(int n);
int last_digit(int n)
{
    n = n % 10;
    return (n);
}

int digits(int n);
int digits(int n)
{
    int i = 0;
    while (n > 0)
    {
        n = n / 10;
        i++;
    }
    return (i);
}

int main()
{
    int i = 0;
    int n;

    cout << "Enter number or Q to quit: ";
    cin >> n;

    if (cin.fail())
    {
        cout << "No data.";
    }
    else
    {
        cout << "First digit: " << first_digit(n) << " Last digit: " << last_digit(n) << " Number of digits: " << digits(n);
    }

}
