#pragma once

#include "entity.hpp"

#include <string>

class Enemy : public Entity {
 public:
    Enemy();
    Enemy(const std::string& name, const int& hp_, const int& level_);


 private:

};