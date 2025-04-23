#include <iostream>

using namespace std;

int main() {
  cout<<"Even fibonacci numbers sum"<<endl;
  int sum = 2;
  int a=1, b=2, current = 3;
  while(current < 4000000) {
    if(current%2==0) {
      sum+=current;
    }
    a = b;
    b = current;
    current = a+b;
  }
  cout<<sum;
  return 0;
}
