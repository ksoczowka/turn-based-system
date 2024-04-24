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
    Item(const std::string& name, const Rarity& rarity); // Set name, rarity and dropChance (in percents)

    std::string getName() { return name_; } // Returns name of the item
    Rarity getRarity() { return rarity_; } // Returns rarity of the item

    virtual void use();
 protected:
    std::string name_; // Name of the item
    Rarity rarity_; // Category of how rare the drop should be
};