#ifndef SHRUB_H
#define SHRUB_H

#include "plant.h"

class Shrub : public Plant {
private:
    bool isThorny;

public:
    Shrub(const std::string& shrubName, bool thorny);
    virtual ~Shrub();

    virtual void grow() const override;
    virtual void print() const override;
};

#endif // SHRUB_H
