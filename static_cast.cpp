#include <iostream>

int main (){
  double sum {100.2};
  unsigned int hours {8};
  unsigned int revenuePerHours { static_cast<unsigned int>(sum/hours)};
  std::cout << revenuePerHours << "\n";
  return 0;
}
