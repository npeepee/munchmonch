#include <vector>
#include <iostream>
#include "Order.h"

// Function to view all orders.
// This takes a vector of Order objects as parameter.
void viewOrders(const std::vector<Order>& orders) {
    // Iterate over each Order in the vector.
    for (const auto& order : orders) {
        // Print the order's id, status, and customer's name.
        std::cout << "Order ID: " << order.getId() << "\n"
            << "Status: " << order.getStatus() << "\n"
            << "Customer: " << order.getCustomer().getName() << "\n"
            << "Items: ";

        // Iterate over each FoodItem in the order.
        for (const auto& item : order.getItems()) {
            // Print the item's name.
            std::cout << item.getName() << ", ";
        }
        std::cout << "\n\n";
    }
}
