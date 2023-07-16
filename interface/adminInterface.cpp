#include "adminInterface.h"
#include <iostream>

AdminInterface::AdminInterface() : password("123456") {}

void AdminInterface::run() {
    std::string inputPassword;
    int attemptCount = 0;

    while (attemptCount < 3) {
        std::cout << "Enter password: ";
        std::getline(std::cin, inputPassword);

        if (inputPassword == password) {
            while (true) {
                std::cout << "------------------------------\n";
                std::cout << "1. View Orders\n";
                std::cout << "2. Update Order Status\n";
                std::cout << "3. View Past Credentials\n";
                std::cout << "4. Exit to Main Menu\n";
                std::cout << "------------------------------\n";
                std::cout << "Enter your choice: ";

                std::string choice;
                std::getline(std::cin, choice);

                if (choice == "1") {
                    viewOrders();
                }
                else if (choice == "2") {
                    updateOrderStatus();
                }
                else if (choice == "3") {
                    std::cout << "This feature is currently under development.\n";
                }
                else if (choice == "4") {
                    std::cout << "Returning to Main Menu...\n";
                    break;
                }
                else {
                    std::cout << "Invalid choice. Please try again.\n";
                }
            }
            break;
        }
        else {
            std::cout << "Incorrect password. Please try again.\n";
            attemptCount++;
        }
    }

    if (attemptCount == 3) {
        std::cout << "Exceeded maximum password attempts. Returning to Main Menu...\n";
    }
}
