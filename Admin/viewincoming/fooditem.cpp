#include "FoodItem.h"

// Constructor implementation.
FoodItem::FoodItem(int id, const std::string& name, double price)
    : id(id), name(name), price(price) {
}

// Getter implementations.
int FoodItem::getId() const {
    return id;
}

std::string FoodItem::getName() const {
    return name;
}

double FoodItem::getPrice() const {
    return price;
}
