#include <iostream>
using std::cout;

int main(void) {
  int nums[]{1, 2, 3, 4, 5};
  int num2 = *(nums + 1);
  int num3 = *(nums + 2);
  cout << "num2 = " << num2 << std::endl;
  cout << "num3 = " << num3 << std::endl;
  return 0;
}
