#include "src/turn_based_system.hpp"

#include <iostream>

int main() {

    Logger* logger = Logger::GetInstance(); // built-in logger to make your life easier!

    Game game = Game(); // one class to manage them all

    game.makePlayer("Player Name", 20, 1);
    
    return 0;
}