#include "plant.h"
#include "grass.h"
#include "tree.h"
#include "shrub.h"

int main() {
    Grass grass("Wheat", 100);
    Tree tree("Oak", 10);
    Shrub shrub("Rose", true);

    grass.print();
    grass.grow();

    tree.print();
    tree.grow();

    shrub.print();
    shrub.grow();

    return 0;
}
