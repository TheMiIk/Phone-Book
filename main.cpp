#include "ContactBook.h"
#include "PhoneBookApp.h"

int main() {
    std::string filename = "contacts.txt";
    ContactBook contactBook(filename);
    contactBook.loadContacts();

    PhoneBookApp::runApplication(contactBook);

    return 0;
}