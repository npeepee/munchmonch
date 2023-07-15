#pragma once

#include <vector>
#include <string>
#include <set>
#include "Customer.h"
#include "FoodItem.h"

// Define the Order class.
class Order {
private:
    int id; // Identifier for the order.
    std::string status; // Status of the order.
    Customer customer; // Customer who placed the order.
    std::vector<FoodItem> items; // List of items in the order.

    // Define the valid order statuses.
    std::set<std::string> validStatuses = { "preparing", "prepared", "out for delivery", "delivered" };
public:
    // Constructor for the Order class.
    Order(int id, const std::string& status, const Customer& customer, const std::vector<FoodItem>& items);

    // Getter for the id field.
    int getId() const;

    // Getter for the status field.
    std::string getStatus() const;

    // Getter for the customer field.
    Customer getCustomer() const;

    // Getter for the items field.
    std::vector<FoodItem> getItems() const;

    // Setter for the status field.
    void setStatus(const std::string& status) {
        if (validStatuses.find(status) != validStatuses.end()) {
            this->status = status;
        }
        else {
            std::cout << "Invalid status: " << status << std::endl;
        }
    }
};
