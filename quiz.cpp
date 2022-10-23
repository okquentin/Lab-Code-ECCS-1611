#include <iostream>
using namespace std;
void recursive_func(int count) {
   recursive_func(count + 2);
   cout << count << endl;
}

int main() {
   recursive_func(1);
   return 0;
}