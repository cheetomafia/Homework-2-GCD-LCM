#include <iostream>
#include <cstdlib>
using namespace std;

//gcd function
int gcd(int a, int b){
  while (a != b){
    if (a > b)
      a = a - b;
    else
      b = b - a;
  }
  return a;
}

//lcm function
int lcm(int a, int b){
  int y = 0;
  y = (abs(a))*((abs(b))/(gcd(a, b)));
return y;
}

//main
int main() {
  int number1;
  int number2;

  cin >> number1 >> number2;

  cout << "GCD: " << gcd(number1, number2) << endl;
  cout << "LCM: " << lcm(number1, number2) << endl;

  return 0;
}
