#include <iostream>

using namespace std;

int main() {
  cout<<"Multiples of 3 or 5 | Optimized | O(1)"<<endl;
  int a = (3+999) * (999/3) / 2;
  int b = (5+995) * (995/5) / 2;
  int c = (15+990) * (990/15) / 2;
  cout<<a+b-c;
  return 0;
}
