#pragma once

#include <map>
#include <string>

class Inventory {
public:
    void add(const std::string& sku, int quantity);
    bool remove(const std::string& sku, int quantity);
    int quantityOf(const std::string& sku) const;

    // Returns a heap-allocated copy of the label; see inventory.cpp.
    char* copyLabel(const char* label) const;

private:
    std::map<std::string, int> stock_;
};
