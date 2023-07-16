# munchmonch - `main` Branch

## About
munchmonch is a duo-authored project by Ayden Goh (@ayd3n2) and Chua Yu Xuan (@pengsies) for Ngee Ann Polytechnic's Data Structures and Algorithm Module (Semester 3/5 (2023/2024)) assignment. munchmonch is an imitation food ordering system that utilizes data structures and algorithms in its functionalities. If you encounter any issues, please feel free to email me at pengsies@gmail.com!

## munchmonch Brances
- `main`: This branch contains the last completed and tested version of the project, which is considered stable and ready for use. It represents the production-ready code and should be used as the base branch for deployments. Only well-tested and reviewed changes are merged into this branch to ensure the reliability and stability of the project.

- `devtest`: This branch is the development and testing branch where all concurrent code resides. It is used for ongoing development and integration of new features and enhancements. However, it may contain incomplete or experimental code that is still being worked on. It is not recommended to use the code from this branch directly as it may be unstable and may not function as expected.

- `hotfix`: This branch is specifically used to address critical bugs or issues that have been identified in the `main` branch. It is created from the `main` branch to fix urgent issues and ensure timely resolution. The code in this branch focuses solely on fixing the identified problem and is thoroughly tested before merging it back into the `main` branch. It helps maintain the stability and integrity of the production code.

- `mainmerge`: This branch is created to facilitate the merging of changes into the `main` branch due to security measures put in place to protect the `main` branch. It serves as an intermediate branch where pull requests are made from other feature branches or development branches. The purpose of this branch is to consolidate and review the changes before merging them into the `main` branch. It allows for thorough testing, code reviews, and validation of the proposed changes to ensure they align with the project's standards and requirements. The `mainmerge` branch helps maintain the integrity and reliability of the `main` branch by providing a controlled and structured approach to merging updates.

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
