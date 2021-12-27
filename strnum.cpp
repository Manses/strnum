#include <iostream>
#include <iomanip>
using namespace std;

double strnum(string s) {
  cout << fixed;
  cout << setprecision(0);
  bool Negative_Number = 0;
  bool Decimal_Number = 0;
  int NumberPart;
  double count = 0;
  int asciiNumber[10] = { 48, 49, 50, 51, 52, 53, 54, 55, 56, 57 };
  for (int i = 0; i <= s.length()-1; i++) {
    if (!(s[i] >= '0' && s[i] <= '9')) {
      if ((s[i] == '-' && Negative_Number == 1) || (s[i] == '.' && Decimal_Number == 1)) {
        return 0;
      } else if (i > 0 && s[i] == '-') {
        return 0;
      } else if (i == s.length()-1 && s[i] == '.') {
        return 0;
      } else if (s[i] != '-' && s[i] != '.') {
        return 0;
      }
    }
    if (i == 0 && s[i] == '-') {
      Negative_Number = 1; 
    }
    if (s[i] == '.') {
      Decimal_Number = 1;
      NumberPart = i - 1;
    }
    if (s[i+1] == '\0' && Decimal_Number == 0) {
      NumberPart = i;
    }
  }
  for (int i = 0; i <= NumberPart; i++) {
    for (int j = 0; j <= 9; j++) {
      if (s[i] == asciiNumber[j]) {
        int countzero = 1;
        for (int k = (NumberPart - i); k >= 1; k--) {
          if (i == NumberPart) {
            countzero = 1;
          } else {
            countzero *= 10;
          }
        }
        count += (j * countzero);
      }
    }
  }
  if (Decimal_Number) {
    cout << fixed;
    cout << setprecision((s.length()-1) - (NumberPart+1));
    for (int i = NumberPart+1; i < s.length(); i++) {
      for (int j = 0; j <= 9; j++) {
        if (s[i] == asciiNumber[j]) {
          double countzero = 1;
          for (int k = i; k > NumberPart+1; k--) {
            countzero /= 10;
          }
          count += (j * countzero);
        }
      }
    }
  }
  if (Negative_Number) {
    count *= -1;
  }
  return count;
}

int main() {
  string number;
  cin >> number;
  cout << strnum(number);
  return 0;
}
