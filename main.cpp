#include <iostream>

int main() {
    int num;
    std::cout << "How many times do you want to print the string?: ";
    std::cin >> num;

    std::string str;
    std::cout << "Please enter a string to print: ";
    getline(std::cin, str);

    for (int i = 0; i < num; i++) {
        std::cout << str;
        std::cout << " \n";
    }
    return 0;
}
