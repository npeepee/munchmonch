// AdminInterface.h

#pragma once

#include "viewOrders.h"
#include "updateOrderStatus.h"

class AdminInterface {
private:
    std::string password;
public:
    // Constructor
    AdminInterface();

    // Method to run the admin interface
    void run();
};

//This is a copy and paste comment to ensure camelCase was implemented