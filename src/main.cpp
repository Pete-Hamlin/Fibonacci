//Standard Includes
#include <iostream>

using namespace std;

class Fib {
  public:
    Fib(int max);
    void count();
  private:
    int maxima;
    int a;
    int b;
};

// Constructor
Fib::Fib(int max) {
  maxima = max;
  a = 0;
  b = 1;
}

// Keeps counting up until one of  the numbers hits the user set buffer
void Fib::count() {
  cout << b << " ";
  while(1) {
    if (b >= a) {
      a += b;
      if (a > maxima) {
        cout << endl;
        break;
      }
      cout << a << " ";
    } else {
      b += a;
      if (b > maxima) {
        cout << endl;
        break;
      }
      cout << b << " ";
    }
  }
}

int main() {
  int max;

  // Set buffer here
  cout << "Please choose max number:";
  cin >> max;
  cout << max << endl;

  Fib fib(max);
  fib.count();
  return 0;
}
