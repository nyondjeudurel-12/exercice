#include <iostream>
#include <string>
#include <vector>
int main() {
    std::string name;
    std::cout << "Enter your name:";
    std::getline(std::cin, name);
    std::cout << "modification B, " << name << "!" << std::endl;
    return 0;
}