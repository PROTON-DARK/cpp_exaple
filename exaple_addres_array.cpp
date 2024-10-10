#include <iostream>

using std::cout;
using std::endl;
using std::size;

int main(void) {
  int nums[]{1, 2, 3, 4, 5};
  for (unsigned i{0}; i < size(nums); i++) {
    cout << "nums[" << i << "]" << "\taddres = " << (nums + i)
         << "\tvalue = " << *(nums + i) << endl;
  };
  return 0;
}
