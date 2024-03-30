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
    Item(const std::string& name, const Rarity& rarity, const int& dropChance); // Set name, rarity and dropChance (in percents)

    int getDropChance() { return dropChance_; } // Returns drop chance of the item
    std::string getName() { return name_; } // Returns name of the item
    Rarity getRarity() { return rarity_; } // Returns rarity of the item

 protected:
    int dropChance_; // Percentage chance of item drop from any source
    std::string name_; // Name of the item
    Rarity rarity_; // Category of how rare the drop should be
};