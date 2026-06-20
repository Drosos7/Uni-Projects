#pragma once
#include "person.h"
#include <iostream>
#include <string>
#include <vector>

class Mathima;

class Kathigitis : public Person {
public:
    Kathigitis(); 
    Kathigitis(const char * in_kodikos, std::string in_fullname, std::string in_fulo, std::string in_eidikothta);
    Kathigitis(const Kathigitis & other);
    ~Kathigitis();
   
    void set_kodiko(const char * in_kodikos);
    void set_eidikothta(std::string in_eidikothta);
    
    const char * get_kodikos() const;
    std::string get_eidikothta() const;
    
    void add_mathima(Mathima* m) { mathimata.push_back(m); }
    void print(std::ostream &output) const override;
    void send_mail(std::string text) const override;
    
private:
    char * kodikos;
    std::string eidikothta;
    std::vector<Mathima *> mathimata;
};

std::ostream& operator<<(std::ostream& output, const Kathigitis & k);