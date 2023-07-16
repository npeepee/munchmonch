# munchmonch - `main` Branch

## About
munchmonch is a duo-authored project by Ayden Goh (@ayd3n2) and Chua Yu Xuan (@pengsies) for Ngee Ann Polytechnic's Data Structures and Algorithm Module (Semester 3/5 (2023/2024)) assignment. munchmonch is an imitation food ordering system that utilizes data structures and algorithms in its functionalities. If you encounter any issues, please feel free to email me at pengsies@gmail.com!

## Branches
- `main`: This branch contains the last completed and tested version, ready for use.
- `devtest`: This branch contains all concurrent code, including features that are still in progress. It is not recommended to use the code from this branch as you may encounter bugs that prevent successful execution.
- `hotfix`: This branch contains the latest development code, including new features that are currently being worked on. It is a testing ground for ongoing development and may contain incomplete or experimental features. The code in this branch is not recommended for use as it may have bugs or issues that need to be resolved before being merged into the `main` branch.

## Features
Upon opening munchmonch, you will be greeted with a main interface that prompts you for the following options:
1) Username
2) Password
3) Register an Account
4) Exit

You can enter your credentials to log in and access the system (Options 1 and 2). If you don't have an account yet, you can choose the option to register a new account by providing a username and password (Option 3). After registration or logging in, you will be directed to either the User or Admin interface, depending on your role. If you wish to exit the system, you can choose the corresponding option in the main interface.

### User Interface
When logged in as a User, you will have access to the following features:
1) Browse all available food selections
2) Create a new order
3) Cancel an order (only if it is not prepared yet)
4) Return to the main interface

In this interface, you can browse available food selections, create new orders, cancel orders that haven't been prepared yet, or return to `Main Interface`.

### Admin Interface
When logged in as an Admin, you will have access to the following features:
1) View incoming orders
2) Update the status of orders
3) View customer information for each order
4) Return to the main interface

In this interface, you can view incoming orders, update order statuses, access customer information associated with each order, or return to `Main Interface`.

### Advanced Features
To be implemented

## Set-up/Usage
### Using Dockerfile
To be implemented

### Visual Studio 2022
To run the console application, ensure that you are on the `main` branch. Then, open Visual Studio 2022 and create a new project. Add the necessary .cpp, .h, and any other required files from the `main/User`, `main/Admin`, and `main/Interfaces` directories to your project. Once added, build the project, and the console application should be ready to use!

### Visual Studio Code


Have fun!
~ Yu Xuan

Please fix any technical issues, as well as any grammatical or spelling errors.
