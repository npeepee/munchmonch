#pragma once

#include <string>

// Define the FoodItem class.
class FoodItem {
private:
    int id; // Identifier for the food item.
    std::string name; // Name of the food item.
    double price; // Price of the food item.
public:
    // Constructor for the FoodItem class.
    FoodItem(int id, const std::string& name, double price);

    // Getter for the id field.
    int getId() const;

    // Getter for the name field.
    std::string getName() const;

    // Getter for the price field.
    double getPrice() const;
};
