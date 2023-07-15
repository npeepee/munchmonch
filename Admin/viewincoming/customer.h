#pragma once

#include <string>

// Define the Customer class.
class Customer {
private:
    int id; // Identifier for the customer.
    std::string name; // Name of the customer.
    std::string address; // Address of the customer.
public:
    // Constructor for the Customer class.
    Customer(int id, const std::string& name, const std::string& address);

    // Getter for the id field.
    int getId() const;

    // Getter for the name field.
    std::string getName() const;

    // Getter for the address field.
    std::string getAddress() const;
};#pragma once
