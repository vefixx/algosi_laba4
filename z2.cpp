#include <iostream>
#include "windows.h"

using namespace std;

int main() {
  SetConsoleOutputCP(CP_UTF8);

  int n;
  cout << "n: ";
  cin >> n;

  int x[n];
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }

  int a,b,c;
  int sum = 0;
  for (int i = 0; i < n-2; i++) {
    if (x[i] + x[i+1] + x[i+2] > sum) {
      a = x[i];
      b = x[i+1];
      c = x[i+2];
      sum = a + b + c;
    }
  }

  cout << "Тройка: " << a << " " << b << " " << c << endl;
  cout << "Сумма: " << sum;

  return 0;
}