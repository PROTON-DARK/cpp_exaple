#include <iostream>

void square(int &);
int main() {
  int n{5};
  std::cout << "n = " << n << std::endl;
  square(n);
  std::cout << "n = " << n << std::endl;
  return 0;
}

void square(int &n) {
  n *= n;
  std::cout << "in function n = " << n << std::endl;
}
