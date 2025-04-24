#include <iostream>

using namespace std;

int main() {
  cout<<"Even fibonacci numbers sum"<<endl;
  int sum = 10;
  int a = 2, b = 8, c = 4*b+a;
  while(c<4000000) {
    sum += c;
    a = b;
    b = c;
    c = 4*b+a;
  }
  cout<<sum;
  return 0;
}
