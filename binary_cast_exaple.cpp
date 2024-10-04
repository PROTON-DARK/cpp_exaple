#include <iostream>

int main (){
  unsigned int num{0b0000'0100};
  num = num << 1;
  std::cout << num << "\n";
  return 0;
}
