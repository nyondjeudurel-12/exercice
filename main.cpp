#include <iostream>
#include <string>
#include <vector>

//commentaire
 
int main() {
    

    std::string name;
    std::cout << "Enter your name:";
    std::getline(std::cin, name);
    std::cout << "modification A, " << name << "!" << std::endl;
    return 0;
}
//autre modification du fichier