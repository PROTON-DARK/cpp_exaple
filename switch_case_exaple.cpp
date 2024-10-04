#include <iostream>

int main (){
  int num;
  std::cout << "Input number: ";
  std::cin >> num;
  switch (num) {
    case 5:
    case 10:
      std::cout << "number is defind\n";
      break;
    default:
      std::cout << "number is not defind\n";
      break;
  };
  return 0;
}
