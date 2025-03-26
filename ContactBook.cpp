#include <fstream>
#include <algorithm>
#include "ContactBook.h"

ContactBook::ContactBook(const std::string& filename) : filename(filename) {}

void ContactBook::addContact(const Contact& contact) {
    contacts.push_back(contact);
}

void ContactBook::updateContact(const std::string& name, const std::string& phone_number, const std::string& email) {
    for (auto& contact : contacts) {
        if (contact.getName() == name) {
            contact.setPhoneNumber(phone_number);
            contact.setEmail(email);
        }
    }
}

void ContactBook::deleteContact(const std::string& name) {
    contacts.erase(std::remove_if(contacts.begin(), contacts.end(),
                                  [&](const Contact& contact) { return contact.getName() == name; }), contacts.end());
}

void ContactBook::viewContacts() const {
    for (const auto& contact : contacts) {
        std::cout << contact;
    }
}

void ContactBook::searchContact(const std::string& query) const {
    for (const auto& contact : contacts) {
        if (contact.getName() == query || contact.getPhoneNumber() == query) {
            std::cout << contact;
        }
    }
}

void ContactBook::loadContacts() {
    std::ifstream file(filename);
    std::string name, phone_number, email;

    while (file >> name >> phone_number >> email) {
        contacts.push_back(Contact(name, phone_number, email));
    }
}

void ContactBook::saveContacts() const {
    std::ofstream file(filename);

    for (const auto& contact : contacts) {
        file << contact.getName() << " " << contact.getPhoneNumber() << " " << contact.getEmail() << std::endl;
    }
}
