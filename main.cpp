#include <iostream>
#include <vector>
#include <windows.h>

#include "src/app/app_manager.h"
#include "src/loop/loop_manager.h"

void showDescriptions(const std::vector<std::string>& descriptions) {
    for (const auto& description : descriptions) {
        std::cout << description << std::endl;
    }
}

void drawText(const loop_manager& lpm) {
    system("cls");

    std::cout << "Welcome to AutoClicker!" << std::endl;
    std::cout << "Made by WinterMiyazaki" << std::endl;
    std::cout << "Status: " << lpm.getStatus() << std::endl;
    std::cout << "" << std::endl;

    const std::vector<std::string> descriptions = {"* F8 for ON/OFF AutoClicker", "* F9 for close"};
    showDescriptions(descriptions);
}

[[noreturn]] int main() {
    loop_manager lpm;
    app_manager am;

    drawText(lpm);

    while (true) {
        am.toggleClicker(lpm);

        if (GetAsyncKeyState(VK_F9) & 1) {
            am.quit();
        }
    }
}