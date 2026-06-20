
#pragma once
#include "person.h"
#include <iostream>
#include <string> 
#include <vector>

class Mathima;

class Foithths : public Person 
{
    public:
    Foithths(const char * in_AM , std::string in_Onomateponumo);
    Foithths(const char *in_AM, std::string in_Onomateponumo, unsigned int in_semester, std::string in_Fulo);
    Foithths(const Foithths &other);
    ~Foithths();
   
   void set_AM(const char *in_AM);
   void set_semester(unsigned int in_semester);  
   
   const char *get_AM() const;
   unsigned int get_semester() const;
   
    void print(std::ostream &output) const override;
    void send_mail(std::string text) const override;
    void add_mathima(Mathima* m) { mathimata.push_back(m); }

   void operator-();
   void operator++();
   void operator++(int);
   void operator+=(unsigned int);
   void operator-=(unsigned int);
    
private: 
    char * AM;
    unsigned int semester; 
    std::vector<Mathima *> mathimata;  
};

std::ostream& operator<<(std::ostream& output, const Foithths & f);