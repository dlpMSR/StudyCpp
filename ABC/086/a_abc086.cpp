#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int c;
  c = a*b;
  if(c%2 == 0) {
    cout << "Even";
  }
  else {
    cout << "Odd";
  }
  return 0;
}

/*
int main() {
  int a, b;
  cin >> a >> b;
  int c = a * b;
  if (c % 2 == 0) cout << "Even" << endl;
  else cout << "Odd" << endl;
}
*/