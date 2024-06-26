#include "../../include/entities/player.hpp"

#include <iostream>

Player::Player() {
    name_ = "Default Player";
    currentHP_ = 10;
    maxHP_ = 10;
    level_ = 1;
    expMultiplier_ = 0.69;
    nextLevelExp_ = calcNextLevelExp_();
}

Player::Player(const std::string& name, const int& hp, const int& level) {
    name_ = name;
    currentHP_ = hp;
    maxHP_ = hp;
    level_ = level;
    expMultiplier_ = 0.69;
    exp_ = 0;
    nextLevelExp_ = calcNextLevelExp_();
}

void Player::giveExp(const int& exp) {
    exp_ += exp;
    while(exp_ >= nextLevelExp_) {
        exp_ -= nextLevelExp_;
        levelUp_();
    }
}

void Player::levelUp_() {
    level_++;
    nextLevelExp_ = calcNextLevelExp_();
}

unsigned int Player::calcNextLevelExp_() {
    return (level_ * 100) * expMultiplier_;
}

void Player::showInfo() {
    std::cout << name_ << ": "
                << "HP: " << currentHP_ << '/' << maxHP_ << " | "
                << "Level: " << level_ << " | " 
                << "Exp: " << exp_ << '/' << nextLevelExp_ << '\n';
}

std::string Player::returnPlayerInfo() {
    return name_ + ": HP: " + std::to_string(currentHP_) + "/" + std::to_string(maxHP_) + " | Level: " + std::to_string(level_) + " | Exp: " + std::to_string(exp_) + '/' + std::to_string(nextLevelExp_);
}

void Player::takeDamage(const unsigned int& amount) {
    currentHP_ -= amount;

    if(currentHP_ <= 0) {
        std::clog << "Player " << name_ << " is dead!\n";
        currentHP_ = 0;
    }
}