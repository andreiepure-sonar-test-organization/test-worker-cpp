#include <iostream>

#include "inventory.h"

int main() {
    Inventory inventory;
    inventory.add("APPLE", 10);
    inventory.remove("APPLE", 3);
    std::cout << "APPLE in stock: " << inventory.quantityOf("APPLE") << std::endl;

    // Intentional issue: the copy returned by copyLabel is never deleted.
    char* label = inventory.copyLabel("fruit");
    std::cout << "Label: " << label << std::endl;
    return 0;
}
