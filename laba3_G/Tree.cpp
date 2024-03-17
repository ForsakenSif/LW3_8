#include "tree.h"

Tree::Tree(const std::string& treeName, int treeHeight) : Plant(treeName), height(treeHeight) {}

Tree::~Tree() {}

void Tree::grow() const {
    std::cout << "Tree is growing..." << std::endl;
}

void Tree::print() const {
    Plant::print();
    std::cout << "Height of tree: " << height << " meters" << std::endl;
}
