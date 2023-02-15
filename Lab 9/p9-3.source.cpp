#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

void displayRun(int values[], int size);

bool hasRun(int values[], int size);

int main()
{
    srand(time(0));
    int size = 20;
    int values[20];
    bool done = false;
    while (!done)
    {
        for (int i = 0; i < size; i++)
        {
            values[i] = (rand()%6) + 1;
        }
        displayRun(values, size);

        if (hasRun(values, size)) 
        {
            done = true;
        }
    }
}

void displayRun(int values[], int size)
{
    if (hasRun(values, size))
    {
        cout << "Has run: ";
        for (int i = 0; i < size - 1; i++)
        {
            if (values[i] == values[i + 1])
            {
                cout << "(";
                while (true)
                {
                    if (values[i] == values[i + 1])
                    {
                        cout << values[i] << " ";
                        i++;
                    }
                    else
                    {
                        cout << values[i] << ")" << " ";
                        break;
                    }

                }
            }
            else if (values[i] == values[i - 1] && values[i] != values[i + 1])
            {
                cout << values[i] << ")" << " ";
            }
            else
            {
                cout << values[i] << " ";
            }
        }
    }
    else
    {
        cout << "No run: ";
        for (int i = 0; i < size; i++)
        {
            cout << values[i] << " ";
        }
    }
    cout << endl;
}

bool hasRun(int values[], int size)
{
    int run = 0;
    int i = 0;
    int t = 1;
    while (run < size)
    {
        if (values[i] == values[t])
        {
            return true;
        }
        else
        {
            i++;
            t++;
        }
        run++;
    }
    return false;
}