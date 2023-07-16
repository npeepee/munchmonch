#pragma once

#include "viewOrders.h"
#include "updateOrder.h"
#include <vector>

class AdminInterface {
private:
    std::string password;
    std::vector<Order>& orders; // reference to the collection of orders
public:
    // Constructor
    AdminInterface(std::vector<Order>& orders);

    // Method to run the admin interface
    void run();
};

//This is a copy and paste comment to ensure camelCase was implemented