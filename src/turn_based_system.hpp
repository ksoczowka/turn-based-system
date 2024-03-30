#pragma once

#include "include/items.hpp"
#include "include/entities.hpp"

#include "include/logger.hpp"

#include <string>
#include <vector>

class Game {
 public:
    Game() {}

    Player getPlayer() { return player_; }

    void addEnemy(const std::string& name, const int& maxHP, const int& level) {
        enemies_.push_back(Enemy(name, maxHP, level));
    }

    void makePlayer(const std::string& name, const int& maxHP, const int& level) {
        player_ = Player(name, maxHP, level);
    }
 private:
    std::vector<Enemy> enemies_;
    Player player_;
    
};