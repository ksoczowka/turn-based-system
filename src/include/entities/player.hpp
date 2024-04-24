#pragma once

#include "entity.hpp"

#include <string>

class Player : public Entity {
 public:
    Player();
    Player(const std::string& name, const int& hp_, const int& level_);

    unsigned int getNextLevelExp() { return nextLevelExp_; }

    void giveExp(const int& exp);
    void showInfo();
    std::string returnPlayerInfo();

    void takeDamage(const unsigned int& amount);

 private:
    void levelUp_();
    unsigned int calcNextLevelExp_();

    unsigned int nextLevelExp_;
    float expMultiplier_;
};