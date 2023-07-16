#include "updateOrder.h"
#include <set>
#include <iostream>

void updateOrder(std::vector<Order>& orders) {
    std::set<std::string> validStatuses = { "preparing", "prepared", "out for delivery", "delivered" };

    int orderId;
    std::string newStatus;

    std::cout << "Enter order ID: ";
    std::cin >> orderId;

    while (true) {
        std::cout << "\nSelect status for the order:\n"
            << "1. preparing\n"
            << "2. prepared\n"
            << "3. out for delivery\n"
            << "4. delivered\n"
            << "0. Exit\n"
            << "Enter your choice: ";
        int choice;
        std::cin >> choice;
        switch (choice) {
        case 1: newStatus = "preparing"; break;
        case 2: newStatus = "prepared"; break;
        case 3: newStatus = "out for delivery"; break;
        case 4: newStatus = "delivered"; break;
        case 0: return; // Exit the function
        default:
            std::cout << "Invalid choice. Try again.\n";
            continue;
        }
        break;
    }

    for (auto& order : orders) {
        if (order.getId() == orderId) {
            order.setStatus(newStatus);
            std::cout << "Order ID: " << orderId << " status updated to " << newStatus << "\n";
            return;
        }
    }

    std::cout << "Order ID: " << orderId << " not found\n";
}

//This is a copy and paste comment to ensure camelCase was implemented
