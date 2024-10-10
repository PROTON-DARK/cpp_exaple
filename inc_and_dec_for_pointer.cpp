#include <iostream>

using std::cout;
using std::endl;

int main(void) {
  int number{10};
  int *pnumber{&number};
  cout << "addres = " << pnumber << "\tvalue = " << *pnumber << endl;
  pnumber++;
  cout << "addres = " << pnumber << "\tvalue = " << *pnumber << endl;
  pnumber--;
  cout << "addres = " << pnumber << "\tvalue = " << *pnumber << endl;
  return 0;
}
