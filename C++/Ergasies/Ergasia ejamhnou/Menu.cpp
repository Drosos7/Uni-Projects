#include "Menu.h"
#include <string>
#include <iostream>

const std::string FILE_NAME = "ergasia_data.csv"; 

using namespace std;


void menu_choices_wind(WINDOW* win, int highlight, const char* choices[], int n_choices, const char* title) 
{
    werase(win);
    box(win, 0, 0);
    wattron(win, A_BOLD);
    mvwprintw(win, 1, 2, "%s", title);
    wattroff(win, A_BOLD);

    int y = 3;
    for (int i = 0; i < n_choices; i++) 
    {
        if (i == highlight) 
        {
            wattron(win, A_REVERSE); 
            mvwprintw(win, y, 2, "%s", choices[i]);
            wattroff(win, A_REVERSE);
        } 
        else 
        {
            mvwprintw(win, y, 2, "%s", choices[i]);
        }
        y++;
    }
    wrefresh(win);
}


void boot_app(Foithtologio& abc) 
{
    const char* epiloges[] = 
    {
        "1. Είμαι Φοιτητής",
        "2. Είμαι Καθηγητής",
        "3. Είμαι Διαχειριστής (Γραμματεία)",
        "4. Έξοδος από την εφαρμογή"
    };
    int n_choices = 4;
    int highlight = 0;

    WINDOW* win = newwin(12, 55, 1, 10);
    keypad(win, TRUE);

    while (true) 
    {
        menu_choices_wind(win, highlight, epiloges, n_choices, "=== ΚΑΛΩΣ ΗΛΘΑΤΕ ΣΤΟ ΦΟΙΤΗΤΟΛΟΓΙΟ ===");
        int c = wgetch(win);

        if (c == KEY_UP && highlight > 0) 
            highlight--;
        else if (c == KEY_DOWN && highlight < n_choices - 1) 
            highlight++;
        else if (c == 10) 
        { 
            if (highlight == 0) 
                menu_foithths(abc);
            else if (highlight == 1) 
                menu_kathigitis(abc);
            else if (highlight == 2) 
                menu_admin(abc);
            else if (highlight == 3) 
                break;
        }
    }
    delwin(win);
}


void menu_foithths(Foithtologio& abc) 
{
    endwin(); 
    char am[50];
    cout << "\n=== ΣΥΝΔΕΣΗ ΦΟΙΤΗΤΗ ===" << endl;
    cout << "Δώσε το ΑΜ σου (8 χαρακτήρες, π.χ. 23123456): ";
    cin >> am;
    cin.ignore();

    Foithths* f = abc.find_foithth(am);
    if (!f) 
    {
        cout << "Ο φοιτητής με ΑΜ " << am << " δεν βρέθηκε! [ENTER] για επιστροφή...";
        cin.get();
        initscr(); refresh();
        return;
    }

    initscr(); refresh();
    const char* choices[] = 
    {
        "1. Προβολή των Στοιχείων μου",
        "2. Έλεγχος των Email μου",
        "3. Επιστροφή στο Αρχικό Μενού"
    };
    int n_choices = 3;
    int highlight = 0;
    
    WINDOW* win = newwin(11, 50, 2, 15);
    keypad(win, TRUE);

    while (true) 
    {
        string titlos = "Φοιτητής: " + string(f->get_Onomateponumo());
        menu_choices_wind(win, highlight, choices, n_choices, titlos.c_str());
        int c = wgetch(win);

        if (c == KEY_UP && highlight > 0) 
            highlight--;
        else if (c == KEY_DOWN && highlight < n_choices - 1) 
            highlight++;
        else if (c == 10) 
        {
            if (highlight == 0) 
            { 
                endwin();
                cout << "\n--- ΤΑ ΣΤΟΙΧΕΙΑ ΜΟΥ ---" << endl;
                f->print(cout);
                cout << "\nΠίεσε [ENTER] για επιστροφή..."; cin.get();
                initscr(); refresh();
            }
            else if (highlight == 1) 
            { 
                endwin();
                cout << "\n--- ΤΑ EMAIL ΜΟΥ ---" << endl;
                f->send_mail("Έχετε μια νέα ενημέρωση για τα μαθήματά σας.");
                cout << "\nΠίεσε [ENTER] για επιστροφή..."; cin.get();
                initscr(); refresh();
            }
            else if (highlight == 2) 
            {
                break;
            }
        }
    }
    delwin(win);
}


void menu_kathigitis(Foithtologio& abc) 
{
    endwin();
    char kod[50];
    cout << "\n=== ΣΥΝΔΕΣΗ ΚΑΘΗΓΗΤΗ ===" << endl;
    cout << "Δώσε τον Κωδικό σου (8 χαρακτήρες, π.χ. KAD00001): ";
    cin >> kod;
    cin.ignore();

    Kathigitis* k = abc.find_Kathigiti(kod);
    if (!k) 
    {
        cout << "Ο καθηγητής δεν βρέθηκε! [ENTER] για επιστροφή...";
        cin.get();
        initscr(); refresh();
        return;
    }

    initscr(); refresh();
    const char* choices[] = 
    {
        "1. Προβολή Προσωπικών Στοιχείων",
        "2. Έλεγχος των Email μου",
        "3. Εγγραφή Φοιτητή σε Μάθημα",
        "4. Επιστροφή στο Αρχικό Μενού"
    };
    int n_choices = 4;
    int highlight = 0;
    
    WINDOW* win = newwin(12, 50, 2, 15);
    keypad(win, TRUE);

    while (true) 
    {
        string titlos = "Καθηγητής: " + string(k->get_Onomateponumo());
        menu_choices_wind(win, highlight, choices, n_choices, titlos.c_str());
        int c = wgetch(win);

        if (c == KEY_UP && highlight > 0) 
            highlight--;
        else if (c == KEY_DOWN && highlight < n_choices - 1) 
            highlight++;
        else if (c == 10) 
        {
            if (highlight == 0) 
            { 
                endwin();
                cout << "\n--- ΤΑ ΣΤΟΙΧΕΙΑ ΜΟΥ ---" << endl;
                k->print(cout);
                cout << "\nΠίεσε [ENTER] για επιστροφή..."; cin.get();
                initscr(); refresh();
            }
            else if (highlight == 1) 
            { 
                endwin();
                cout << "\n--- ΤΑ EMAIL ΜΟΥ ---" << endl;
                k->send_mail("Έχετε νέες αιτήσεις εγγραφής στα μαθήματά σας.");
                cout << "\nΠίεσε [ENTER] για επιστροφή..."; cin.get();
                initscr(); refresh();
            }
            else if (highlight == 2) 
            { 
                endwin();
                char f_am[50], m_kod[50];
                cout << "\n--- ΕΓΓΡΑΦΗ ΦΟΙΤΗΤΗ ΣΕ ΜΑΘΗΜΑ ---" << endl;
                cout << "Δώσε AM Φοιτητή: "; cin >> f_am;
                cout << "Δώσε Κωδικό Μαθήματος: "; cin >> m_kod;
                cin.ignore();
                try 
                {
                    abc.reg_foithth(f_am, m_kod);
                    cout << "\nΗ εγγραφή του φοιτητή ολοκληρώθηκε επιτυχώς!" << endl;
                } 
                catch (const exception& e) 
                {
                    cout << "\nΣφάλμα: " << e.what() << endl;
                }
                cout << "\nΠίεσε [ENTER] για επιστροφή..."; cin.get();
                initscr(); refresh();
            }
            else if (highlight == 3) 
            {
                break;
            }
        }
    }
    delwin(win);
}


void menu_admin(Foithtologio& abc) 
{
    const char* choices[] = 
    {
        "1. Προβολή Όλων των Στοιχείων (Print All)",
        "2. Προσθήκη Νέου Φοιτητή",
        "3. Προσθήκη Νέου Καθηγητή",
        "4. Αναζήτηση Φοιτητή",
        "5. Διαγραφή Φοιτητή",
        "6. Αποθήκευση σε Αρχείο",
        "7. Επιστροφή στο Αρχικό Μενού"
    };
    int n_choices = 7;
    int highlight = 0;
    
    WINDOW* win = newwin(15, 55, 2, 10);
    keypad(win, TRUE);

    while (true) 
    {
        menu_choices_wind(win, highlight, choices, n_choices, "=== ΔΙΑΧΕΙΡΙΣΗ ΣΥΣΤΗΜΑΤΟΣ (ADMIN) ===");
        int c = wgetch(win);

        if (c == KEY_UP && highlight > 0) 
            highlight--;
        else if (c == KEY_DOWN && highlight < n_choices - 1) 
            highlight++;
        else if (c == 10) 
        {
            if (highlight == 0) 
            { 
                endwin();
                abc.print_all();
                cout << "\nΠίεσε [ENTER] για επιστροφή..."; cin.get();
                initscr(); refresh();
            }
            else if (highlight == 1) 
            { 
                endwin();
                string onoma, fulo;
                char am[50];
                int eksamino;
                cout << "\n--- ΠΡΟΣΘΗΚΗ ΝΕΟΥ ΦΟΙΤΗΤΗ ---" << endl;
                cout << "Δώσε ΑΜ (8 χαρακτήρες): "; cin >> am; cin.ignore();
                cout << "Δώσε Ονοματεπώνυμο: "; getline(cin, onoma);
                cout << "Δώσε Εξάμηνο (1-16): "; cin >> eksamino; cin.ignore();
                cout << "Δώσε Φύλο (Male/Female): "; cin >> fulo; cin.ignore();
                try 
                {
                    abc.add_foithth(new Foithths(am, onoma, eksamino, fulo));
                    cout << "\nΟ φοιτητής προστέθηκε με επιτυχία!" << endl;
                } 
                catch (const exception& e) 
                {
                    cout << "\nΣφάλμα: " << e.what() << endl;
                }
                cout << "\nΠίεσε [ENTER] για επιστροφή..."; cin.get();
                initscr(); refresh();
            }
            else if (highlight == 2) 
            { 
                endwin();
                string onoma, fulo, eidikothta;
                char kodikos[50];
                cout << "\n--- ΠΡΟΣΘΗΚΗ ΝΕΟΥ ΚΑΘΗΓΗΤΗ ---" << endl;
                cout << "Δώσε Κωδικό (8 χαρακτήρες): "; cin >> kodikos; cin.ignore();
                cout << "Δώσε Ονοματεπώνυμο: "; getline(cin, onoma);
                cout << "Δώσε Φύλο (Male/Female): "; cin >> fulo; cin.ignore();
                cout << "Δώσε Ειδικότητα: "; getline(cin, eidikothta);
                try 
                {
                    abc.add_Kathigiti(new Kathigitis(kodikos, onoma, fulo, eidikothta));
                    cout << "\nΟ καθηγητής προστέθηκε με επιτυχία!" << endl;
                } 
                catch (const exception& e) 
                {
                    cout << "\nΣφάλμα: " << e.what() << endl;
                }
                cout << "\nΠίεσε [ENTER] για επιστροφή..."; cin.get();
                initscr(); refresh();
            }
            else if (highlight == 3) 
            { 
                endwin();
                char am[50];
                cout << "\n--- ΑΝΑΖΗΤΗΣΗ ΦΟΙΤΗΤΗ ---" << endl;
                cout << "Δώσε ΑΜ για έλεγχο: "; cin >> am; cin.ignore();
                Foithths* f = abc.find_foithth(am);
                if (f) 
                {
                    cout << "\n[ΕΠΙΤΥΧΙΑ] Βρέθηκε ο φοιτητής: " << endl;
                    f->print(cout);
                } 
                else 
                {
                    cout << "\n[ΣΦΑΛΜΑ] Δεν υπάρχει φοιτητής με αυτό το ΑΜ." << endl;
                }
                cout << "\nΠίεσε [ENTER] για επιστροφή..."; cin.get();
                initscr(); refresh();
            }
            else if (highlight == 4) 
            { 
                endwin();
                char am[50];
                cout << "\n--- ΔΙΑΓΡΑΦΗ ΦΟΙΤΗΤΗ ---" << endl;
                cout << "Δώσε ΑΜ για διαγραφή από το σύστημα: "; cin >> am; cin.ignore();
                try 
                {
                    abc.del_foithth(am);
                    cout << "\nΟ φοιτητής διαγράφηκε με επιτυχία." << endl;
                } 
                catch (const exception& e) 
                {
                    cout << "\nΣφάλμα: " << e.what() << endl;
                }
                cout << "\nΠίεσε [ENTER] για επιστροφή..."; cin.get();
                initscr(); refresh();
            }
            else if (highlight == 5) 
            { 
                try 
                {
                    abc.save_csv(FILE_NAME);
                    mvprintw(18, 10, "Το αρχείο ενημερώθηκε επιτυχώς!   ");
                } 
                catch (...) 
                {
                    mvprintw(18, 10, "Αποτυχία αποθήκευσης αρχείου!    ");
                }
                refresh();
            }
            else if (highlight == 6) 
            {
                break;
            }
        }
    }
    delwin(win);
}