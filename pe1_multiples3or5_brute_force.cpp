#include <iostream>

using namespace std;

int main() {
    cout<<"Multiples of 3 or 5 | Brute force approach"<<endl;
    int sum = 0;
    for(int i=1; i<1000; i++) {
       if(i%3==0 || i%5==0) {
          sum += i;
       }
    }
    cout<<sum;
    return 0;
}
