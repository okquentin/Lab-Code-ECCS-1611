#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

const int STUDENTS = 5;
const int QUIZZES = 4;

int quizTotal(string scores[][QUIZZES], int student);

int main()
{
int total = 0;
double quiz1Avg = 0;
double quiz2Avg = 0;
double quiz3Avg = 0;
string last_name;
string first_name;
string scores[STUDENTS][QUIZZES];
for (int i = 0; i < STUDENTS; i++)
{
cout << "Enter first and last name of student #" << i + 1 << ": ";
cin >> first_name >> last_name;
scores[i][0] = last_name + ", " + first_name;
}
for (int i = 0; i < STUDENTS; i++)
{
cout << "Quiz 1 score for " << scores[i][0] << ": ";
cin >> scores[i][1];
}
for (int i = 0; i < STUDENTS; i++)
{
cout << "Quiz 2 score for " << scores[i][0] << ": ";
cin >> scores[i][2];
}
for (int i = 0; i < STUDENTS; i++)
{
cout << "Quiz 3 score for " << scores[i][0] << ": ";
cin >> scores[i][3];
}
for (int i = 0; i < STUDENTS; i++)
{
quiz1Avg += stoi(scores[i][1]);
}
quiz1Avg = quiz1Avg / STUDENTS;
cout << "Quiz 1 average: " << quiz1Avg << endl;
for (int i = 0; i < STUDENTS; i++)
{
quiz2Avg += stoi(scores[i][2]);
}
quiz2Avg = quiz2Avg / STUDENTS;
cout << "Quiz 2 average: " << quiz2Avg << endl;
for (int i = 0; i < STUDENTS; i++)
{
quiz3Avg += stoi(scores[i][3]);
}
quiz3Avg = quiz3Avg / STUDENTS;
cout << "Quiz 3 average: " << quiz3Avg << endl;
for (int i = 0; i < STUDENTS; i++)
{
cout << "Total score for " << scores[i][0] << ": " << quizTotal(scores, i) << endl;
}
}

int quizTotal(string scores[][QUIZZES], int student)
{
int total = 0;
for (int i = 1; i < QUIZZES; i++)
{
total += stoi(scores[student][i]);
}
return total;
}
