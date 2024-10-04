#include <iostream>

int main () {
  int num;
  std::cout << "8 < ";
  std::cin >> num;
  if (8 < num) {
    std::cout << "True";
  }
  else {
    std::cout << "False";
  }
  std::cout << "\n";
  return 0;
}
