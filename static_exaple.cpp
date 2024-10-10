#include <iostream>

void print() {
  static int n{1};
  std::cout << "n = " << n << std::endl;
  n++;
}

int main() {
  print();
  print();
  print();
}
