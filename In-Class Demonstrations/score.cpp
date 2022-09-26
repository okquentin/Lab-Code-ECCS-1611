#include <iostream>
using namespace std;

int main()
{
    const int MAX_SCORE = 100;
    const int MIN_SCORE = 0;  
    
    int score;

    cout << "Grading program.\n";
    do {
        cout << "Enter value (" << MIN_SCORE << "-" << MAX_SCORE << "): ";
            cin >> score;
    } while (score < MIN_SCORE || score > MAX_SCORE);

if(score >= 70){
cout << "passing.\n";
}
else{
cout << "failing.\n";
}





return 0;
}