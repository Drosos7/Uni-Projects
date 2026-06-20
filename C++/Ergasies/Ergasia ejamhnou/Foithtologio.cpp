#include "Foithtologio.h"
#include <cstring>
#include <stdexcept>
#include <fstream>
#include <sstream>

using namespace std;

Foithtologio::Foithtologio() {}

Foithtologio::~Foithtologio() 
{
    for (auto p : lista_melon) 
        delete p;

    for (auto m : lista_mathimaton) 
        delete m;
}

void Foithtologio::add_foithth(Foithths* f) 
{
    if (!f) 
        throw invalid_argument("Λάθος δείκτης");

    if (find_foithth(f->get_AM())) 
        throw invalid_argument("Το ΑΜ υπάρχει ήδη!");

    lista_melon.push_back(f);
}

void Foithtologio::add_Kathigiti(Kathigitis* k) 
{
    if (!k)
        throw invalid_argument("Κενός Δείκτης");

    if (find_Kathigiti(k->get_kodikos())) 
        throw invalid_argument("Ο κωδικός καθηγητή υπάρχει ήδη!");

    lista_melon.push_back(k);
}

void Foithtologio::add_mathima(Mathima* m) 
{
    if (!m) 
        throw invalid_argument("Null δείκτης μαθήματος");

    for (auto x : lista_mathimaton) 
    {
        if (strcmp(x->get_kodikos(), m->get_kodikos()) == 0) 
            throw invalid_argument("Το μάθημα υπάρχει ήδη!");
    }
    lista_mathimaton.push_back(m);
}

Foithths* Foithtologio::find_foithth(const char* AM) 
{
    for (auto p : lista_melon) 
    {
        Foithths* f = dynamic_cast<Foithths*>(p); 
        if (f != nullptr && strcmp(f->get_AM(), AM) == 0) 
            return f;
    }
    return nullptr;
}

Kathigitis* Foithtologio::find_Kathigiti(const char* kodikos) 
{
    for (auto p : lista_melon) 
    {
        Kathigitis* k = dynamic_cast<Kathigitis*>(p); 
        if (k != nullptr && strcmp(k->get_kodikos(), kodikos) == 0) 
            return k;
    }
    return nullptr;
}

Mathima* Foithtologio::find_mathima(const char* kodikos) 
{
    for (auto m : lista_mathimaton) 
    {
        if (strcmp(m->get_kodikos(), kodikos) == 0)
            return m;
    }
    return nullptr;
}

void Foithtologio::del_foithth(const char* AM)
{
    for (size_t i = 0; i < lista_melon.size(); i++) 
    {
        Foithths* f = dynamic_cast<Foithths*>(lista_melon[i]);
        if (f != nullptr && strcmp(f->get_AM(), AM) == 0) 
        {
            delete lista_melon[i];
            lista_melon.erase(lista_melon.begin() + i);
            return;
        }
    }
    throw runtime_error("Ο φοιτητής δεν βρέθηκε.");
}

void Foithtologio::del_Kathigiti(const char* kodikos) 
{
    for (size_t i = 0; i < lista_melon.size(); i++)
    {
        Kathigitis* k = dynamic_cast<Kathigitis*>(lista_melon[i]);
        if (k != nullptr && strcmp(k->get_kodikos(), kodikos) == 0) 
        {
            for (auto m : lista_mathimaton) 
            {
                if (m->get_upefthinos() == k) 
                    m->set_upefthinos(nullptr);
            }
            delete lista_melon[i];
            lista_melon.erase(lista_melon.begin() + i);
            return;
        }
    }
    throw runtime_error("Ο καθηγητής δεν βρέθηκε.");
}

void Foithtologio::reg_foithth(const char* AM, const char* kodikos_mathimatos) 
{
    Foithths* f = find_foithth(AM);
    Mathima* m = find_mathima(kodikos_mathimatos);
    if (f && m) 
        f->add_mathima(m);
    else 
        throw runtime_error("Αποτυχία σύνδεσης εγγραφής: Δεν βρέθηκε φοιτητής ή μάθημα");
}

void Foithtologio::reg_Kathigiti(const char* kodikos_k, const char* kodikos_m) 
{
    Kathigitis* k = find_Kathigiti(kodikos_k);
    Mathima* m = find_mathima(kodikos_m);
    if (k && m) 
        m->set_upefthinos(k);
    else 
        throw runtime_error("Αποτυχία ανάθεσης μαθήματος.");
}

void Foithtologio::send_mail_f(string text) 
{
    cout << "\n\t\t ΑΠΟΣΤΟΛΗ EMAIL ΣΕ ΦΟΙΤΗΤΕΣ " << endl;
    for (auto p : lista_melon) 
    {
        Foithths* f = dynamic_cast<Foithths*>(p);
        if (f != nullptr) 
            f->send_mail(text);
    }
}

void Foithtologio::send_mail_k(string text) 
{
    cout << "\n\t\t ΑΠΟΣΤΟΛΗ EMAIL ΣΕ ΚΑΘΗΓΗΤΕΣ \t" << endl;
    for (auto p : lista_melon) 
    {
        Kathigitis* k = dynamic_cast<Kathigitis*>(p);
        if (k != nullptr) 
            k->send_mail(text);
    }
}

void Foithtologio::print_all() const 
{
    cout << "\n========= ΚΑΤΑΛΟΓΟΣ ΦΟΙΤΗΤΟΛΟΓΙΟΥ =========" << endl;
    cout << "--------- ΚΑΘΗΓΗΤΕΣ ΚΑΙ ΦΟΙΤΗΤΕΣ -------" << endl;
    for (auto p : lista_melon) 
        p->print(cout);

    cout << "\n--- ΜΑΘΗΜΑΤΑ ---" << endl;
    for (auto m : lista_mathimaton) 
    { 
        m->print(cout); 
        cout << endl;
    }
}

void Foithtologio::save_csv(string filename)
{
    ofstream file(filename);
    if (!file.is_open()) 
        throw runtime_error("Αδυναμία δημιουργίας αρχείου CSV");

    file << "ΚΑΘΗΓΗΤΕΣ\n";
    for (auto p : lista_melon) 
    {
        Kathigitis* k = dynamic_cast<Kathigitis*>(p);
        if (k) 
            file << k->get_kodikos() << "," << k->get_Onomateponumo() << "," << k->get_Fulo() << "," << k->get_eidikothta() << "\n";
    }

    file << "ΜΑΘΗΜΑΤΑ\n";
    for (auto m : lista_mathimaton) 
    {
        string tkod = (m->get_upefthinos()) ? m->get_upefthinos()->get_kodikos() : "NONE";
        file << m->get_kodikos() << "," << m->get_perigrafh() << "," << m->get_semester() << "," << tkod << "\n";
    }

    file << "ΦΟΙΤΗΤΕΣ\n";
    for (auto p : lista_melon) 
    {
        Foithths* f = dynamic_cast<Foithths*>(p);
        if (f) 
            file << f->get_AM() << "," << f->get_Onomateponumo() << "," << f->get_semester() << "," << f->get_Fulo() << "\n";
    }
    file.close();
}

void Foithtologio::retrieve_csv(string filename)
{
    ifstream file(filename);
    if (!file.is_open()) 
        throw runtime_error("Αδυναμία ανάγνωσης αρχείου CSV");

    string line, mode = "";
    while (getline(file, line))
    {
        if (line.empty()) 
            continue;

        if (line == "ΚΑΘΗΓΗΤΕΣ" || line == "ΜΑΘΗΜΑΤΑ" || line == "ΦΟΙΤΗΤΕΣ") 
        { 
            mode = line; 
            continue; 
        }

        stringstream ss(line);
        string field1, field2, field3, field4;

        if (mode == "ΚΑΘΗΓΗΤΕΣ") 
        {
            getline(ss, field1, ','); 
            getline(ss, field2, ','); 
            getline(ss, field3, ','); 
            getline(ss, field4, ',');
            add_Kathigiti(new Kathigitis(field1.c_str(), field2, field3, field4));
        } 
        else if (mode == "ΜΑΘΗΜΑΤΑ") 
        {
            getline(ss, field1, ','); 
            getline(ss, field2, ','); 
            getline(ss, field3, ','); 
            getline(ss, field4, ',');
            Kathigitis* upeuth = find_Kathigiti(field4.c_str());
            add_mathima(new Mathima(field1.c_str(), field2, stoi(field3), upeuth));
        } 
        else if (mode == "ΦΟΙΤΗΤΕΣ") 
        {
            getline(ss, field1, ','); 
            getline(ss, field2, ','); 
            getline(ss, field3, ','); 
            getline(ss, field4, ',');
            add_foithth(new Foithths(field1.c_str(), field2, stoi(field3), field4));
        }
    }
    file.close();
}