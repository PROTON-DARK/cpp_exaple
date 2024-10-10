#include <iostream>
#include <ostream>

void print(std::string name, unsigned int age) {
  std::cout << "Name = " << name << "\tAge = " << age << std::endl;
}

int main() {
  print("Egor", 17);
  return 0;
}
