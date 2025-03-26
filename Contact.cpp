#include "Contact.h"

Contact::Contact() {}

Contact::Contact(const std::string& name, const std::string& phone_number, const std::string& email)
        : name(name), phone_number(phone_number), email(email) {}

const std::string& Contact::getName() const {
    return name;
}

void Contact::setName(const std::string& name) {
    this->name = name;
}

const std::string& Contact::getPhoneNumber() const {
    return phone_number;
}

void Contact::setPhoneNumber(const std::string& phone_number) {
    this->phone_number = phone_number;
}

const std::string& Contact::getEmail() const {
    return email;
}

void Contact::setEmail(const std::string& email) {
    this->email = email;
}

std::ostream& operator<<(std::ostream& os, const Contact& contact) {
    os << "Name: " << contact.getName() << std::endl;
    os << "Phone number: " << contact.getPhoneNumber() << std::endl;
    os << "Email: " << contact.getEmail() << std::endl;
    return os;
}
