#include "shrub.h"

Shrub::Shrub(const std::string& shrubName, bool thorny) : Plant(shrubName), isThorny(thorny) {}

Shrub::~Shrub() {}

void Shrub::grow() const {
    std::cout << "Shrub is growing..." << std::endl;
}

void Shrub::print() const {
    Plant::print();
    std::cout << "Is thorny: " << (isThorny ? "Yes" : "No") << std::endl;
}
