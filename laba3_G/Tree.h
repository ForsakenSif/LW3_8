#ifndef TREE_H
#define TREE_H

#include "plant.h"

class Tree : public Plant {
private:
    int height;

public:
    Tree(const std::string& treeName, int treeHeight);
    virtual ~Tree();

    virtual void grow() const override;
    virtual void print() const override;
};

#endif // TREE_H
