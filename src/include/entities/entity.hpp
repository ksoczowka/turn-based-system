#pragma once

#include <string>

class Entity {
 public:
    Entity() {}

    std::string getName() { return name_; }
    int getCurrentHP() { return currentHP_; }
    int getMaxHP() { return maxHP_; }
    unsigned int getLevel() { return level_; }
    unsigned int getExp() { return exp_; }

    virtual void attack(Entity& attacker, Entity& defender) {}
    virtual void showInfo() {}
 protected:
    std::string name_;
    int currentHP_;
    int maxHP_;
    unsigned int level_;
    unsigned int exp_;
};