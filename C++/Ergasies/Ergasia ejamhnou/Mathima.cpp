#include "Mathima.h"
#include "Kathigitis.h"
#include <stdexcept> 
#include <cstring> 

using namespace std;

Mathima:: Mathima()
{
    kodikos=new char[1];
    kodikos[0]='\0';
    perigrafh="-";
    semester=1;
    upefthinos=nullptr; 
}

Mathima::Mathima (const char *in_kodikos , std::string in_perigrafh, unsigned int in_semester, Kathigitis* in_upefthinos)
{
    
    if(in_kodikos==nullptr || in_kodikos==0)
        throw invalid_argument("Ο κωδικός δεν πρέπει να είναι κενός");
    
    if(strlen(in_kodikos) != 8)
        throw length_error("Το μήκος του κωδικού είναι αυστηρά  8 ");
    
    if(in_semester<1 || in_semester>16)
        throw out_of_range("Το εξάμηνο είναι μεταξύ 1-16");
    
    if(!in_upefthinos)
       throw invalid_argument("Δεν έχει δωθεί υπεύθυνος μαθήματος");
    
    kodikos=new char[strlen(in_kodikos)+1];
    strcpy(kodikos,in_kodikos);

    perigrafh= in_perigrafh;
    semester=in_semester;
    upefthinos=in_upefthinos;
}

Mathima::~Mathima()
{
    delete []kodikos;
}

void Mathima::set_kodikos(const char * in_kodikos)
{
    if(in_kodikos==nullptr || in_kodikos==0)
        throw invalid_argument("Ο κωδικός δεν πρέπει να είναι κενός");
    
    if(strlen(in_kodikos) != 8)
        throw length_error("Το μήκος του κωδικού είναι αυστηρά  8 ");
        
    kodikos=new char[strlen(in_kodikos)+1];
    strcpy(kodikos,in_kodikos);
}

void Mathima:: set_perigrafh(std::string in_perigrafh)
{
    perigrafh =in_perigrafh;
}

void Mathima::set_semester(unsigned int in_semester)
{
     if(in_semester<1 || in_semester>16)
        throw out_of_range("Το εξάμηνο είναι μεταξύ 1-16");

       semester=in_semester; 
}

void Mathima::set_upefthinos(Kathigitis* in_upefthinos)
{
    if(!in_upefthinos)
       throw invalid_argument("Δεν έχει δωθεί υπεύθυνος μαθήματος");
      
      upefthinos=in_upefthinos;     
}

const char * Mathima::get_kodikos()const
{
    return kodikos;
}

string Mathima:: get_perigrafh()const
{
    return perigrafh;
}

unsigned int Mathima:: get_semester()const
{
    return semester;
}

Kathigitis* Mathima:: get_upefthinos()const
{
    return upefthinos;
}

void Mathima:: print(ostream& output)const
{
    output<<"Κωδικός:"<<kodikos<<"|";
    output<<"Περιγραφή : "<<perigrafh<<"|";
    output<<"Εξάμηνο:"<<semester<<"|";
    if(!upefthinos)
        output<<"Yπεύθυνος Καθηγητής:-";
    else    
        output<<"Yπεύθυνος Καθηγητής:"<<upefthinos->get_Onomateponumo();
    output<<endl;
}
ostream& operator<<(ostream& output, const Mathima & m)
{
    m.print(output);
    return output;
}