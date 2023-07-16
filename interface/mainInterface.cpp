#include "mainMenu.h"
#include <iostream>

MainMenu::MainMenu() {}

void MainMenu::run() {
    while (true) {
        std::cout << "------------------------------\n";
        std::cout << "1. Admin Interface\n";
        std::cout << "2. User Interface\n";
        std::cout << "3. Exit\n";
        std::cout << "------------------------------\n";
        std::cout << "Enter your choice: ";

        std::string choice;
        std::getline(std::cin, choice);

        if (choice == "1") {
            AdminInterface adminInterface;
            adminInterface.run();
        }
        else if (choice == "2") {
            std::cout << "This feature is not yet implemented.\n";
        }
        else if (choice == "3") {
            std::cout << "Exiting... Thank you for using our system.\n";
            break;
        }
        else {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }
}
 
 //This is a copy and paste comment to ensure camelCase was implemented