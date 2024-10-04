#include <iostream>

int main() {
  int i{6};
  do {
    std::cout << "i = " << i << "\n";
    i--;
  } while (i > 0);
  return 0;
}
