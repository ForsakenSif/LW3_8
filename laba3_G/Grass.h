#ifndef GRASS_H
#define GRASS_H

#include "plant.h"

class Grass : public Plant {
private:
    int blades;

public:
    Grass(const std::string& grassName, int numOfBlades);
    virtual ~Grass();

    virtual void grow() const override;
    virtual void print() const override;
};

#endif
