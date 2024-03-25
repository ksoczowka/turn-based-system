#pragma once

#include <string>

enum class Rarity {
    common = 0,
    uncommon = 1,
    rare = 2,
    epic = 3,
    legendary = 4,
    special = 5
};

class Item {
 public:
    Item();
    Item(const std::string& name, const Rarity& rarity);

    std::string getName() { return name_; }
    Rarity getRarity() { return rarity_; }

 protected:
    std::string name_;
    Rarity rarity_;
};