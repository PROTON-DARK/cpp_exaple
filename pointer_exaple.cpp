#include <iostream>

int main(void) {
  int number{25};
  int *pnumber{&number};
  *pnumber = 10;
  std::cout << &number << std::endl;
  std::cout << *pnumber << std::endl;
  return 0;
}
