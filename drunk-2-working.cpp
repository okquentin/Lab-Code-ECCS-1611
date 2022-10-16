#include <ctime>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double y = 0;
    double x = 0;
    int i = 0;
    double final_x = 0;
    double final_y = 0;
    double distance;
    double total_dist = 0;
    double avg_dist;
    double exp_dist = 0;
    double avg_length = 1.072983805;
    int numb;
    int drunkard;
    int min;
    srand(time(0));

    cout << "Enter number of minutes for each drunkard to stagger: ";
    cin >> min;

    min = min * 60;

    for (drunkard = 0; drunkard <= 10000; drunkard++)
    {
        y = 0;
        x = 0;
        i = 0;

        while (i <= min)
        {
            numb = (rand() % 9) + 1;

            if (numb == 1)
            {
                y++;
            }
            else if (numb == 2)
            {
                y--;
            }
            else if (numb == 3)
            {
                x++;
            }
            else if (numb == 4)
            {
                x--;
            }
            else if (numb == 5)
            {
                x++;
                y++;
            }
            else if (numb == 6)
            {
                x++;
                y--;
            }
            else if (numb == 7)
            {
                x--;
                y--;
            }
            else if (numb == 8)
            {
                x--;
                y++;
            }

            i++;
        }

        distance = sqrt(pow(x, 2) + pow(y, 2));
        total_dist = total_dist + distance;
    }
    exp_dist = sqrt(min * avg_length);
    avg_dist = total_dist / 10000;
    cout << "Expected distance: " << exp_dist << endl;
    cout << "Average distance:  " << avg_dist;
}