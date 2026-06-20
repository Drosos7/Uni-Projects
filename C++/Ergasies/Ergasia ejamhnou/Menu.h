#pragma once
#include <ncurses.h>
#include "Foithtologio.h"
#include <string>
extern const std::string FILE_NAME;
void boot_app(Foithtologio& abc);
void menu_admin(Foithtologio& abc);
void menu_foithths(Foithtologio& abc);
void menu_kathigitis(Foithtologio& abc);
void menu_choices_wind(WINDOW* win, int highlight, const char* choices[], int n_choices, const char* title);