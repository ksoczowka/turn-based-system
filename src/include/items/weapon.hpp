#pragma once

#include "item.hpp"

class Weapon : public Item {
 public:
    Weapon();

    void use();
 private:
    int reach_;
    int damage_;
    int dropChance_;
};