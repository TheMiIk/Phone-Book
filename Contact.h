#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact {
private:
    std::string name;
    std::string phone_number;
    std::string email;

public:
    Contact();
    Contact(const std::string& name, const std::string& phone_number, const std::string& email);

    const std::string& getName() const;
    void setName(const std::string& name);

    const std::string& getPhoneNumber() const;
    void setPhoneNumber(const std::string& phone_number);

    const std::string& getEmail() const;
    void setEmail(const std::string& email);

    friend std::ostream& operator<<(std::ostream& os, const Contact& contact);
};

#endif // CONTACT_H
