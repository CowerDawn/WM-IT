#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::cout << "\033[2J\033[1;1H";

    const char* COLORS[] = {
        "\033[31m",
        "\033[32m",
        "\033[33m",
        "\033[34m",
        "\033[35m",
        "\033[36m"
    };

    std::srand(std::time(0));
    int currentColorIndex = std::rand() % (sizeof(COLORS) / sizeof(COLORS[0]));

    std::cout << COLORS[currentColorIndex] << "\033[37m";

    std::cout << "┌─────────────────────────────────────────────────────────────────────────────┐\n";
    std::cout << "│                                                                             │\n";
    std::cout << "│  _    _   _____   __  Welcome to WM-IT!                                     │\n";
    std::cout << "│ | |  | | |_   _| |  | Thank you for downloading WM-IT                       │\n";
    std::cout << "│ | |__| |   | |   |  | WM-IT github:                                         │\n";
    std::cout << "│ |  __  |   | |   |__| https://github.com/CowerDawn/WM-IT                    │\n";
    std::cout << "│ | |  | |  _| |_   __  Creater: CowerDawn,S0siskaKiller                      │\n";
    std::cout << "│ |_|  |_| |_____| |__| WM-IT - This is a Window manager inside the terminal! │\n";
    std::cout << "│                                                                             │\n";
    std::cout << "│                                                                             │\n";
    std::cout << "└─────────────────────────────────────────────────────────────────────────────┘\n";

    std::cout << "\033[0m";

    return 0;
}
