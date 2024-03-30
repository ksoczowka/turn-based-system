#include "../../include/items/item.hpp"

Item::Item() {
    name_ = "Default Item";
    rarity_ = Rarity::common;
    dropChance_ = 100;
}

Item::Item(const std::string& name, const Rarity& rarity, const int& dropChance) {
    name_ = name;
    rarity_ = rarity;
    dropChance_ = dropChance;
}