#include "Order.h"

// Constructor implementation.
Order::Order(int id, const std::string& status, const Customer& customer, const std::vector<FoodItem>& items)
    : id(id), status(status), customer(customer), items(items) {
}

// Getter and setter implementations.
int Order::getId() const {
    return id;
}

std::string Order::getStatus() const {
    return status;
}

Customer Order::getCustomer() const {
    return customer;
}

std::vector<FoodItem> getItems() const {
    return items;
}

void Order::setStatus(const std::string& status) {
    this->status = status;
}
