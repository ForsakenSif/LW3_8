#ifndef PLANT_H
#define PLANT_H

#include <iostream>

class Plant {
protected:
    std::string name;

public:
    Plant(const std::string& plantName);
    virtual ~Plant();

    virtual void grow() const = 0; // заданная функция
    virtual void print() const;
};

#endif // PLANT_H
