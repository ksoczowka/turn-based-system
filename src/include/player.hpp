#pragma once

#include <string>

class Player {
 public:
    Player();
    Player(const std::string& name, const int& hp_, const int& level_);

    std::string getName() { return name_; }
    int getCurrentHP() { return currentHP_; }
    int getMaxHP() { return maxHP_; }
    unsigned int getLevel() { return level_; }
    unsigned int getExp() { return exp_; }
    unsigned int getNextLevelExp() { return nextLevelExp_; }

    void giveExp(const int& exp);
    void showPlayerInfo();

 private:
    void levelUp_();
    unsigned int calcNextLevelExp_();

    std::string name_;
    int currentHP_;
    int maxHP_;
    unsigned int level_;
    unsigned int exp_;
    unsigned int nextLevelExp_;
    float expMultiplier_;
};