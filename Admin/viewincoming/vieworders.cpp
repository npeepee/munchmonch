#include "viewOrders.h"
#include <iostream>

void displayPage(const std::vector<Order>& orders, int page) {
    int start = page * 5;
    int end = start + 5;

    for (int i = start; i < end && i < orders.size(); i++) {
        std::cout << "Order ID: " << orders[i].getId()
            << ", Status: " << orders[i].getStatus()
            << ", Customer: " << orders[i].getCustomer().getName()
            << "\n";
    }
}

void viewOrders(const std::vector<Order>& orders) {
    int page = 0;
    while (true) {
        displayPage(orders, page);

        std::cout << "\nMenu:\n"
            << "1. Next\n"
            << "0. Exit\n"
            << "Enter your choice: ";
        int choice;
        std::cin >> choice;

        switch (choice) {
        case 1:
            if ((page + 1) * 5 < orders.size()) {
                page++; // Go to next page only if it exists
            }
            else {
                std::cout << "You're on the last page.\n";
            }
            break;
        case 0: return; // Exit the function
        default:
            std::cout << "Invalid choice. Try again.\n";
            continue;
        }
    }
}
