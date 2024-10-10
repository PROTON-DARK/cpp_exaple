#include <iostream>

int n{5};

void print() {
  n++;
  std::cout << "n = " << n << std::endl;
}

int main() {
  print();
  n++;
  std::cout << "n = " << n << std::endl;
}
