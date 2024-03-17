#include "grass.h"

Grass::Grass(const std::string& grassName, int numOfBlades) : Plant(grassName), blades(numOfBlades) {}

Grass::~Grass() {}

void Grass::grow() const {
    std::cout << "Grass is growing..." << std::endl;
}

void Grass::print() const {
    Plant::print();
    std::cout << "Blades of grass: " << blades << std::endl;
}
