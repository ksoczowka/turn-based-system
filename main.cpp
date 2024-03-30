#include "src/turn_based_system.hpp"

#include <iostream>

int main() {

    Logger* logger = Logger::GetInstance();

    Player player = Player("Higami", 10, 1);
    logger->log("Created Player: " + player.returnPlayerInfo());

    logger->showHistory();
    
    return 0;
}