#include <iostream>

using std::cout;
using std::endl;

int main(void) {
  char langs[][10]{"Java", "Python", "C++"};
  cout << langs[0] << ": " << std::size(langs[0]) << " bytes" << endl;
  return 0;
}
