#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

vector <int> append(vector<int> a, vector<int> b);
void displayVector(vector<int> append);

int main()
{
vector<int> a = {1,4,9,16};

vector<int> b = {9,7,4,9,11};

displayVector(append(a, b));
}

vector <int> append(vector<int> a, vector<int> b)
{
for (int i = 0; i < b.size(); i++)
{
a.push_back(b[i]);
}

return a;
}

void displayVector(vector<int> append)
{
for (int i = 0; i < append.size(); i++)
{
cout << append[i] << " ";
}
}