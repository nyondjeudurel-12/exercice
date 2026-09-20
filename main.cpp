#include <iostream>
#include <string>
#include <vector>

int main() {
    //modification premiere du fichier
    //autre modification du fichier

    std::string name;
    std::cout << "Enter your name:";
    std::getline(std::cin, name);
    std::cout << "modification A, " << name << "!" << std::endl;
    return 0;
}