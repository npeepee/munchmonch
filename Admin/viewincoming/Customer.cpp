#include "Customer.h"

// Constructor implementation.
Customer::Customer(int id, const std::string& name, const std::string& address)
    : id(id), name(name), address(address) {
}

// Getter implementations.
int Customer::getId() const {
    return id;
}

std::string Customer::getName() const {
    return name;
}

std::string Customer::getAddress() const {
    return address;
}
