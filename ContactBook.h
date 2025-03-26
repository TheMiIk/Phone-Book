#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H

#include <vector>
#include <string>
#include "Contact.h"

class ContactBook {
private:
    std::vector<Contact> contacts;
    std::string filename;

public:
    ContactBook(const std::string& filename);

    void addContact(const Contact& contact);
    void updateContact(const std::string& name, const std::string& phone_number, const std::string& email);
    void deleteContact(const std::string& name);
    void viewContacts() const;
    void searchContact(const std::string& query) const;

    void loadContacts();
    void saveContacts() const;
};

#endif //CONTACTBOOK_H
