#include <iostream>
using namespace std;
unsigned long strlength(const char* str);
int strcompare(const char* s1, const char* s2);


int main() 
{
    char str1[999];
    char str2[999];
    int lexicograph = 0;


    cout << "Enter string 1: ";
    cin.getline(str1, 80);
    cout << "Enter string 2: ";
    cin.getline(str2, 80);

    const char* s1 = str1;
    const char* s2 = str2;

    cout << "String 1 is " << strlength(str1) << " characters long." << endl;
    cout << "String 2 is " << strlength(str2) << " characters long." << endl;

    if (strcompare(s1, s2) > 0)
    {
        cout << "string 1 lexicographically comes before string 2";
    }
    if (strcompare(s1, s2) == 0)
    {
        cout << "string 1 and 2 are lexicographically the same";
    }
    if (strcompare(s1, s2) < 0)
    {
        cout << "string 2 lexicographically comes before string 1";
    }
}

unsigned long strlength(const char* str) 
{

    unsigned long cLength = 0;
    while (str[cLength] != '\0') {
        cLength++;
    }
    return cLength;
}


int strcompare(const char* s1, const char* s2) 
{
    int a;
    if (strlength(s1) > strlength(s2))
    {
        a = strlength(s1);
    }
    else
    {
        a = strlength(s2);
    }

    for (int i = 0; i < a; i++)
    {
        if (s1[i] != s2[i])
        {
            return s2[i] - s1[i];
        }
        i++;
    }

    return 0;
}