#include "../include/items/item.hpp"

Item::Item() {
    name_ = "Default Item";
    rarity_ = Rarity::common;
}

Item::Item(const std::string& name, const Rarity& rarity) {
    name_ = name;
    rarity_ = rarity;
}