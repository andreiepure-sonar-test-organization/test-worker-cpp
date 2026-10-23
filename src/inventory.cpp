#include "inventory.h"

#include <cstring>
#include <stdexcept>

void Inventory::add(const std::string& sku, int quantity) {
    if (quantity <= 0) {
        throw std::invalid_argument("Quantity must be positive");
    }
    stock_[sku] += quantity;
}

bool Inventory::remove(const std::string& sku, int quantity) {
    int available = quantityOf(sku);
    if (available < quantity) {
        return false;
    }
    stock_[sku] = available - quantity;
    return true;
}

int Inventory::quantityOf(const std::string& sku) const {
    auto it = stock_.find(sku);
    return it == stock_.end() ? 0 : it->second;
}

// Intentional issues: manual memory management with new[], and an unbounded strcpy.
char* Inventory::copyLabel(const char* label) const {
    char* copy = new char[16];
    strcpy(copy, label);
    return copy;
}
