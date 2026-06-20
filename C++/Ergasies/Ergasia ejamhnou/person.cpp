#include "person.h"
#include <stdexcept>
#include <cstring>

using namespace std;

Person::Person(string in_Onomateponumo, string in_Fulo) 
{
    if (in_Fulo != "Male" && in_Fulo != "Female" && in_Fulo != "-")
        throw invalid_argument("Το φύλο είναι μόνο Male/Female");
    Onomateponumo = in_Onomateponumo;
    Fulo = in_Fulo;
}

Person::~Person() {}

void Person::set_Onomateponumo(string in_Onomateponumo)
{ 
    Onomateponumo = in_Onomateponumo; 
}
void Person::set_Fulo(string in_Fulo)
 {
    if (in_Fulo != "Male" && in_Fulo != "Female" && in_Fulo != "-") 
        throw invalid_argument("Το φύλο είναι μόνο Male/Female");
    Fulo = in_Fulo;
}

string Person::get_Onomateponumo() const 
{
     return Onomateponumo;
 }
string Person::get_Fulo() const 
{ 
    return Fulo;
 }

void Person::print(ostream &output) const
{
    int length=strlen(Onomateponumo.c_str());
    output << "Όνομα: " << Onomateponumo <<"("<<length<<")"<< " | Φύλο: " << Fulo;
}
