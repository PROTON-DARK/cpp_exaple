#include <iostream>

int n{5};

void print() {
  int n{10};
  std::cout << "global n = " << ::n << std::endl;
}

int main() {
  int n{8};
  print();
  return 0;
}
