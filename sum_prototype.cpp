#include <iostream>
#include <ostream>

void sum(auto, auto);

int main() {
  const int n1{4};
  const int n2{2};
  sum(n1, n2);
  const double d1{1.2};
  const double d2{4.112};
  sum(d1, d2);
  return 0;
}

void sum(auto a, auto b) {
  auto result = a + b;
  std::cout << a << " + " << b << " = " << result << std::endl;
}
