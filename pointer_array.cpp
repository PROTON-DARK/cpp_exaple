#include <iostream>

using std::cout;
using std::endl;
int main(void) {
  int nums[]{1, 2, 3, 4, 5};
  int *pnums{nums};
  int num3 = *(pnums + 2);

  cout << "*ptr = " << num3 << endl;
  return 0;
}
