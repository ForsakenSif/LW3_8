#include "plant.h"

Plant::Plant(const std::string& plantName) : name(plantName) {}

Plant::~Plant() {}

void Plant::print() const {
    std::cout << "Name: " << name << std::endl;
}
