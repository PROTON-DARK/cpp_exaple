#include <iostream>

void hello();

int main(void) {
  hello();
  hello();
  return 0;
}

void hello() { std::cout << "Hello" << std::endl; }
