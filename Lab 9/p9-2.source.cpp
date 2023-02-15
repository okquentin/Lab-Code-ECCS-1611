#include <iostream>

using namespace std;

bool isSortedIncreasing(int values[], int size);

bool isSortedDecreasing(int values[], int size);

bool hasAdjecentDuplicates(int values[], int size);

bool hasDuplicates(int values[], int size);

int main()
{
    int values[6];
    int size = 6;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter integer #" << i << ": ";
        cin >> values[i];
    }
    if (isSortedIncreasing(values, size))
    {
        cout << "The data points are increasing." << endl;
    }
    else
    {
        cout << "The data points are not increasing." << endl;
    }
    if (isSortedDecreasing(values, size))
    {
        cout << "The data points are decreasing." << endl;
    }
    else
    {
        cout << "The data points are not decreasing." << endl;
    }
    if (hasAdjecentDuplicates(values, size))
    {
        cout << "The data has adjacent duplicates." << endl;
    }
    else
    {
        cout << "The data does not have adjacent duplicates." << endl;
    }
    if (hasDuplicates(values, size))
    {
        cout << "The data has duplicates." << endl;
    }
    else
    {
        cout << "The data does not have duplicates." << endl;
    }
}

bool isSortedIncreasing(int values[], int size)
{
    int sort = 1;
    int i = 0;
    int t = 1;
    while (sort < size)
    {
        if (values[i] <= values[t])
        {
            i++;
            t++;
        }
        else
        {
            return false;
        }
        sort++;
    }
    return true;
}

bool isSortedDecreasing(int values[], int size)
{
    int sort = 1;
    int i = 0;
    int t = 1;
    while (sort < size)
    {
        if (values[i] >= values[t])
        {
            i++;
            t++;
        }
        else
        {
            return false;
        }
        sort++;
    }
    return true;
}
bool hasAdjecentDuplicates(int values[], int size)
{
    int sort = 0;
    int i = 0;
    int t = 1;
    while (sort < size)
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
        sort++;
    }
    return false;
}
bool hasDuplicates(int values[], int size)
{
    while (true) 
    {
        for (int i = 1; i < size; i++)
        {
            if (values[0] == values[i])
            {
                return true;
            }
        }
        for (int i = 2; i < size; i++)
        {
            if (values[1] == values[i])
            {
                return true;
            }
        }
        for (int i = 3; i < size; i++)
        {
            if (values[2] == values[i])
            {
                return true;
            }
        }
        for (int i = 4; i < size; i++)
        {
            if (values[3] == values[i])
            {
                return true;
            }
        }
        for (int i = 5; i < size; i++)
        {
            if (values[4] == values[i])
            {
                return true;
            }
        }
        return false;
    }
}