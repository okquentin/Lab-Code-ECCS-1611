#include <iostream>
using namespace std;

bool isCardValid(int digits[], int size);

int main()
{
    int size = 8;
    int digits[8];
    int cardNum;
    int temp;
    bool done = false;
    while (!done)
    {
        cout << "Enter 8-digit credit card # or Q to quit: ";
        cin >> cardNum;
        if (cin.fail())
        {
            done = true;
        }
        else
        {
            for (int i = 0; i < size; i++)
            {
                temp = cardNum % 10;
                cardNum = cardNum / 10;
                digits[i] = temp;
            }
            if (isCardValid(digits, size))
            {
                cout << "Card is valid." << endl;
            }
            else
            {
                cout << "Card is invalid" << endl;
            }
        }
    }
}

bool isCardValid(int digits[], int size)
{
    int sum1 = 0;
    int sum2 = 0;
    int temp = 0;
    int total = 0;
    for (int i = 0; i < size; i += 2)
    {
        sum1 += digits[i];
    }
    for (int i = 1; i < size; i += 2)
    {
        temp = digits[i] * 2;
        if (temp >= 10)
        {
            sum2 += temp % 10;
            temp = temp / 10;
            sum2 += temp;
        }
        else
        {
            sum2 += temp;
        }
    }
    total = sum1 + sum2;
    total = total % 10;
    if (total == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}