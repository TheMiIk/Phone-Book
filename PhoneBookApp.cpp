#include <iostream>
#include "PhoneBookApp.h"

void PhoneBookApp::runApplication(ContactBook &contactBook) {
    while (true) {
        std::cout << "1. Add contact\n2. Update contact\n3. Delete contact\n4. View all contacts\n5. Search contact\n6. Save contacts\n7. Exit\n";
        std::cout << "Choose an option: ";

        int option;
        std::cin >> option;

        switch (option) {
            case 1: {
                std::string name, phone_number, email;
                std::cout << "Enter name: ";
                std::cin >> name;
                std::cout << "Enter phone number: ";
                std::cin >> phone_number;
                std::cout << "Enter email: ";
                std::cin >> email;

                Contact newContact(name, phone_number, email);
                contactBook.addContact(newContact);

                break;
            }
            case 2: {
                std::string name, phone_number, email;
                std::cout << "Enter name of contact to update: ";
                std::cin >> name;
                std::cout << "Enter new phone number: ";
                std::cin >> phone_number;
                std::cout << "Enter new email: ";
                std::cin >> email;

                contactBook.updateContact(name, phone_number, email);

                break;
            }
            case 3: {
                std::string name;
                std::cout << "Enter name of contact to delete: ";
                std::cin >> name;

                contactBook.deleteContact(name);

                break;
            }
            case 4: {
                contactBook.viewContacts();
                break;
            }
            case 5: {
                std::string query;
                std::cout << "Enter name or phone number to search: ";
                std::cin >> query;

                contactBook.searchContact(query);

                break;
            }
            case 6: {
                contactBook.saveContacts();
                break;
            }
            case 7: {
                return;
            }
            default: {
                std::cout << "Invalid option. Try again.\n";
                break;
            }
        }
    }
}
