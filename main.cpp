#include <iostream>
#include <vector>

void showDescriptions(const std::vector<std::string>& descriptions) {
    for (const auto& description : descriptions) {
        std::cout << description << std::endl;
    }
}

int main() {
    std::cout << "Welcome to AutoClicker!" << std::endl;
    std::cout << "Made by WinterMiyazaki" << std::endl;
    std::cout << "" << std::endl;

    const std::vector<std::string> descriptions = {"* F8 for ON/OFF AutoClicker", "* F9 for close"};
    showDescriptions(descriptions);
    return 0;
}