#include "../../include/entities/enemy.hpp"

Enemy::Enemy() {
    name_ = "Default Enemy";
    currentHP_ = 10;
    maxHP_ = 10;
    level_ = 1;
}

Enemy::Enemy(const std::string& name, const int& hp, const int& level) {
    name_ = name;
    currentHP_ = hp;
    maxHP_ = hp;
    level_ = level;
}