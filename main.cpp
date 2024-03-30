#include "src/turn_based_system.hpp"

#include <iostream>

int main() {

    Logger* logger = Logger::GetInstance(); // built-in logger to make your life easier!

    Player player = Player("Kris", 100, 1);

    logger->log("Created player: " + player.getName());
    
    return 0;
}