#include "viewOrders.h"
#include <iostream>

void viewOrders(const std::vector<Order>& orders) {
    try {
        // Check if there are any orders to display
        if (orders.empty()) {
            std::cout << "No orders to display.\n";
            return;
        }

        // Loop through all orders
        for (size_t i = 0; i < orders.size(); ++i) {
            // Print details of each order
            std::cout << "Order ID: " << orders[i].getId()
                << ", Status: " << orders[i].getStatus()
                << ", Customer ID: " << orders[i].getCustomer().getId() << "\n";

            // If 5 orders have been printed
            if ((i + 1) % 5 == 0) {
                // Prompt the user with a mini menu
                std::cout << "---------------------\n";
                std::cout << "1. Continue to next page\n";
                std::cout << "2. Exit to previous menu\n";
                std::cout << "---------------------\n";
                std::cout << "Enter your choice: ";

                std::string input;
                std::getline(std::cin, input);

                // If the user types '2', stop displaying the orders and return
                if (input == "2") {
                    return;
                }
            }
        }
    }
    catch (const std::exception& e) {
        // Catch any exceptions and print the error message
        std::cout << "An error occurred: " << e.what() << '\n';
    }
}

//This is a copy and paste comment to ensure camelCase was implemented