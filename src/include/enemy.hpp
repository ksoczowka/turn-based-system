#pragma once

#include <string>

class Enemy {
 public:
    Enemy();
    Enemy(const std::string& name, const int& hp_, const int& level_);

    std::string getName() { return name_; }
    int getHP() { return hp_; }
    unsigned int getLevel() { return level_; }

 private:
    std::string name_;
    int hp_;
    unsigned int level_;
};