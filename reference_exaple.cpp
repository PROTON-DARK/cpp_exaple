#include <iostream>

int main () {
    int num {5};
    int &refNum {num};
    std::cout << "refNum = " << refNum << "\n";
    return 0;
}
