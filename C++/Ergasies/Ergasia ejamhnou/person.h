#pragma once
#include <iostream>
#include <string>

class Person {
public:
    Person(std::string in_Onomateponumo, std::string in_Fulo);
    virtual ~Person(); 

    void set_Onomateponumo(std::string in_Onomateponumo);
    void set_Fulo(std::string in_Fulo);

    std::string get_Onomateponumo() const;
    std::string get_Fulo() const;

    virtual void send_mail(std::string text) const = 0; 
    virtual void print(std::ostream &output) const;

protected:
    std::string Onomateponumo;
    std::string Fulo;
};