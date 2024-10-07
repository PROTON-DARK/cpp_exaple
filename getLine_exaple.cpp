#include <iostream>

int main () {
    const int max_lenght {100};
    char text[max_lenght] {};
    std::cout << "Input text (max 100 letters): ";
    std::cin.getline(text, max_lenght, '\n');
    std::cout << text << "\n";
    return 0;
}
