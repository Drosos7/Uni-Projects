#include <iostream>
#include <string>
#include <cstring>
#include <stdexcept>
#include "Kathigitis.h"

using namespace std;

Kathigitis::Kathigitis() : Person("-", "-")
 {
    kodikos = new char[1];
    kodikos[0] = '\0';
    eidikothta = "-";
}

Kathigitis::Kathigitis(const char *in_kodikos, string in_fullname, string in_fulo, string in_eidikothta) : Person(in_fullname, in_fulo) 
{
    if(in_kodikos == nullptr || strlen(in_kodikos) != 8)
        throw length_error("Το μήκος του κωδικού καθηγητή είναι αυστηρά 8 χαρακτήρες");

    kodikos = new char[9];
    strcpy(kodikos, in_kodikos);
    eidikothta = in_eidikothta;
}

Kathigitis::Kathigitis(const Kathigitis & other) : Person(other.Onomateponumo, other.Fulo) 
{
    kodikos = new char[9];
    strcpy(kodikos, other.kodikos);
    eidikothta = other.eidikothta;
    mathimata = other.mathimata;
}

Kathigitis::~Kathigitis()
 { 
   delete[] kodikos; 
}

void Kathigitis::set_kodiko(const char * in_kodikos) 
{
    if(in_kodikos == nullptr || strlen(in_kodikos) != 8)
        throw length_error("Το μήκος του κωδικού καθηγητή είναι αυστηρά 8 χαρακτήρες");

    if(kodikos) delete[] kodikos;
    kodikos = new char[9];
    strcpy(kodikos, in_kodikos);
}

void Kathigitis::set_eidikothta(string in_eidikothta)
{ 
   eidikothta = in_eidikothta; 
}

const char * Kathigitis::get_kodikos() const 
{
    return kodikos;
    } 

string Kathigitis::get_eidikothta() const 
{ 
   return eidikothta; 
}

void Kathigitis::send_mail(string text) const 
{
    cout << "[Faculty Mail -> " << kodikos << "@ice.uniwa.gr]: Αξιότιμε/η κ. " << Onomateponumo << ", " << text << endl;
}

void Kathigitis::print(ostream& output) const 
{
    output << "Κωδικός: " << kodikos << " | ";
    Person::print(output);
    output << " | Ειδικότητα: " << eidikothta;
    output<<endl;
}