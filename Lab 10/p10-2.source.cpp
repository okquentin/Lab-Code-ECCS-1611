#include <iostream>
using namespace std;

bool isCardValid(int digits[], int size);

int main()
{
int size = 16;
int digits[16];
string cardNum;
int temp;
bool done = false;
while (!done)
{
cout << "Enter 16-digit credit card # or Q to quit: ";
cin >> cardNum;
if (cardNum == "q" || cardNum == "Q")
{
done = true;
}
else
{
for (int i = 0; i < size; i++)
{
if (cardNum[i] == '0')
{
digits[i] = 0;
}
if (cardNum[i] == '1')
{
digits[i] = 1;
}
if (cardNum[i] == '2')
{
digits[i] = 2;
}
if (cardNum[i] == '3')
{
digits[i] = 3;
}
if (cardNum[i] == '4')
{
digits[i] = 4;
}
if (cardNum[i] == '5')
{
digits[i] = 5;
}
if (cardNum[i] == '6')
{
digits[i] = 6;
}
if (cardNum[i] == '7')
{
digits[i] = 7;
}
if (cardNum[i] == '8')
{
digits[i] = 8;
}
if (cardNum[i] == '9')
{
digits[i] = 9;
}
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
total = sum1 + sum2 + 1;
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
