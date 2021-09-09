#include <iostream>

int main() {
    int x;
    std::string sstring;
    std::cout << "Type a string: ";
    getline(std::cin, sstring);
    std::cout << "Type a number: "; // Type a number and press enter
    std::cin >> x; // Get user input from the keyboard

    for (int i = 0; i < x; i++) {
        std::cout << sstring;
        std::cout << "\n";
    }
    return 0;
}
