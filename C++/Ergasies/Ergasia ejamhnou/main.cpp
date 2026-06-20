#include <iostream>
#include <clocale>
#include <ncurses.h>
#include "Foithtologio.h"
#include "Menu.h"

using namespace std;


int main() 
{
    setlocale(LC_ALL, ""); 

    Foithtologio abc;
    
    
    bool loaded = false;
    try {
        abc.retrieve_csv(FILE_NAME);
        loaded = true;
    } catch (...) 
    {
       
    }

 
    if (!loaded || abc.find_foithth("23123456") == nullptr) 
    {
        try {
            abc.add_Kathigiti(new Kathigitis("KAD00001", "Νίκος Παπαδόπουλος", "Male", "Δομές Δεδομένων"));
            abc.add_Kathigiti(new Kathigitis("KAD00002", "Ελένη Γεωργίου", "Female", "Αντικειμενοστραφής Προγραμματισμός"));

            abc.add_mathima(new Mathima("CS101000", "Πλήρης εισαγωγή στην γλώσσα C++", 2, abc.find_Kathigiti("KAD00002")));
            abc.add_mathima(new Mathima("CS102000", "Πλήρης εισαγωγή στις δομές δεδομένων", 3, abc.find_Kathigiti("KAD00001")));

            abc.add_foithth(new Foithths("23123456", "Γιώργος Ιωάννου", 3, "Male"));
            abc.add_foithth(new Foithths("23987654", "Μαρία Αντωνίου", 1, "Female"));

            abc.reg_foithth("23123456", "CS101000");
        } catch (...) {}
    }

  
    initscr();
    clear();
    noecho();
    cbreak();
    curs_set(0); 

    boot_app(abc);

    endwin();
    return 0;
}