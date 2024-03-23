#include "../include/enemy.hpp"

Enemy::Enemy() {
    name_ = "Default Enemy";
    hp_ = 10;
    level_ = 1;
}

Enemy::Enemy(const std::string& name, const int& hp, const int& level) {
    name_ = name;
    hp_ = hp;
    level_ = level;
}