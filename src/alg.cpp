// Copyright 2021 NNTU-CS
#include <cmath>

int gcd(int a, int b) {
  a = abs(a);
  b = abs(b);
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}
