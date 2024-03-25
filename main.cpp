#include "src/turn_based_system.hpp"

#include <iostream>

int main() {
    Player player = Player("Higami", 10, 1);

    player.showPlayerInfo();
    player.giveExp(123);
    player.showPlayerInfo();

    return 0;
}