// #include <iostream>
// #include "windows.h"
//
// using namespace std;
//
// int main() {
//   SetConsoleOutputCP(CP_UTF8);
//
//   int n;
//   cout << "n: ";
//   cin >> n;
//
//   int x[n];
//   for (int i = 0; i < n; i++) {
//     cin >> x[i];
//   }
//
//   int max = -9999999;
//   int sum = 0;
//   int proiz = 1;
//   for (int i = 0; i < n; i++) {
//     sum += x[i];
//     proiz *= x[i];
//
//     if (x[i] > max) {
//       sum = 0;
//       proiz = 1;
//       max = x[i];
//     }
//   }
//
//   cout << "Сумма: " << sum << endl;
//   cout << "Произведение: " << proiz << endl;
//
//   return 1;
// }