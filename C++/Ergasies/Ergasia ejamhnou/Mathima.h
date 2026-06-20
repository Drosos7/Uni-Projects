#pragma once
#include <iostream>
#include <string>

class Kathigitis;

class Mathima{
    public:
    Mathima();
    Mathima(const char *in_kodikos , std::string in_perigrafh, unsigned int in_semester, Kathigitis* in_upefthinos);
    Mathima(const Mathima & other);

    ~Mathima();

    void set_kodikos(const char * in_kodikos);
    void set_perigrafh(std::string in_perigrafh);
    void set_semester(unsigned int in_semester);
    void set_upefthinos(Kathigitis * in_upefthinos);

    const char * get_kodikos()const;
    std::string get_perigrafh()const;
    unsigned int get_semester()const;
    Kathigitis* get_upefthinos()const;

    void print(std::ostream& output)const;

    private:
    char * kodikos;
    std::string perigrafh;
    unsigned int semester;
    Kathigitis* upefthinos;
};
std::ostream& operator<<(std::ostream& output, const Mathima & m);