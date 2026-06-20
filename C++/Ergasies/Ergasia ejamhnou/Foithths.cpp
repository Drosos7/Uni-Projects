#include <iostream>
#include <cstring>
#include <stdexcept>
#include "Foithths.h"
#include "Mathima.h"

using namespace std;

Foithths::Foithths(const char* in_AM, string in_Onomateponumo) : Person(in_Onomateponumo, "-") 
{
    if(in_AM == nullptr || strlen(in_AM) != 8)
        throw length_error("Το μήκος του ΑΜ είναι αυστηρά 8 χαρακτήρες");
   
    AM = new char[9];
    strcpy(AM, in_AM);
    semester = 1;
}

Foithths::Foithths(const char *in_AM, string in_Onomateponumo, unsigned int in_semester, string in_Fulo) : Person(in_Onomateponumo, in_Fulo) 
{
    if(in_AM == nullptr || strlen(in_AM) != 8)
        throw length_error("Το μήκος του ΑΜ είναι αυστηρά 8 χαρακτήρες");

    if(in_semester < 1 || in_semester > 16)
        throw out_of_range("Το εξάμηνο είναι μεταξύ 1 και 16");
    
    AM = new char[9];
    strcpy(AM, in_AM);
    semester = in_semester;
}

Foithths::Foithths(const Foithths &other) : Person(other.Onomateponumo, other.Fulo) 
{
    AM = new char[9];
    strcpy(AM, other.AM);
    semester = other.semester;
    mathimata = other.mathimata;
}

Foithths::~Foithths() 
{ 
    delete[] AM; 
}

void Foithths::set_AM(const char *in_AM) 
{
    if(in_AM == nullptr || strlen(in_AM) != 8)
        throw length_error("Το μήκος του ΑΜ είναι αυστηρά 8 χαρακτήρες");

    if(AM) 
    delete[] AM;
   
    AM = new char[9];
    strcpy(AM, in_AM);
}

void Foithths::set_semester(unsigned int in_semester) 
{
    if(in_semester >= 1 && in_semester <= 16) 
        semester = in_semester;
    else
     throw out_of_range("Το εξάμηνο είναι μεταξύ 1 και 16");    
}

unsigned int Foithths::get_semester() const 
{ 
    return semester; 
}
const char* Foithths::get_AM() const 
{ 
    return AM; 
}

void Foithths::send_mail(string text) const 
{
    cout << "[Student Webmail -> " << AM << "@uniwa.gr]: Aξιότιμε/η κ." << Onomateponumo << ", " << text << endl;
}


void Foithths::print(ostream& output) const
{
    output<<"AM:"<<AM;
    int length=strlen(Onomateponumo.c_str());
    output<<" Φοιτητής/τρια: "<<Onomateponumo<<" ("<<length<<")";
    output<<" Φύλο:"<<Fulo;
    output<<" Εξάμηνο:"<<semester;
    cout<<endl;
}

void Foithths::operator -()
{
    if(Fulo=="Male")
        Fulo="Female";
     else 
      Fulo="Male";
       
}

void Foithths::operator++() 
{ 
    if(semester >= 16) 
        throw out_of_range("Όριο 16 εξάμηνα!"); 
    semester++; 
}

   void Foithths::operator ++(int)
{
    if(semester>=16)
    throw out_of_range(string("Για την/τον") +Onomateponumo+ " τα εξάμηνα δεν υπερβαίνουν τα 16!");
    semester++;
    
}
void Foithths::operator+=(unsigned int p) 
{ 
    if(semester+p>16)
    {
        semester =16;
        cout<<"Για την/τον "<<Onomateponumo<< " τα εξάμηνα δεν υπερβαίνουν τα 16!";
    }
      else
        semester+=p;  
}
void Foithths::operator-=(unsigned int p) 
{ 
    if(semester>p &&(semester-p) >=1)
        semester -= p;
    else {
        semester=1;
        cout<<"Για την/τον "<<Onomateponumo<< " ελάχιστο εξάμηνο το 1!"<<endl;
 }
}

ostream& operator<<(ostream& output, const Foithths & f) 
{ 
    f.print(output);
     return output; 
    }