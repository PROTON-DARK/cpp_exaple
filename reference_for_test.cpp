#include <iostream>

int main () {
    int nums[] {1, 2, 3, 4, 5};
    for (auto &n : nums) {
        n = n * n;
    };
    for (auto &n : nums){
        std::cout << "n : " << n << "\n";
    };
    return 0;
}
