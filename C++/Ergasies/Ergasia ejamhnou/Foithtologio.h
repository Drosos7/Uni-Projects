#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "person.h"
#include "Foithths.h"
#include "Kathigitis.h"
#include "Mathima.h"

class Foithtologio {
public:
    Foithtologio();
    ~Foithtologio(); 

    void add_foithth(Foithths* f);
    void add_Kathigiti(Kathigitis* k);
    void add_mathima(Mathima* m);

    Foithths* find_foithth(const char* AM);
    Kathigitis* find_Kathigiti(const char* kodikos);
    Mathima* find_mathima(const char* kodikos);

    void del_foithth(const char* AM);
    void del_Kathigiti(const char* kodikos);

    void reg_foithth(const char* AM, const char* kodikos_mathimatos);
    void reg_Kathigiti(const char* kodikos_k, const char* kodikos_m);

    void send_mail_f(std::string text);
    void send_mail_k(std::string text);

    void save_csv(std::string filename);
    void retrieve_csv(std::string filename);

    void print_all() const;

private:
    std::vector<Person*> lista_melon;    
    std::vector<Mathima*> lista_mathimaton;
};