// Main für Hausaufgabe 2
#include "Labyrinth.hpp"
#include <curses.h>

int main() {
	Labyrinth lab;
	
	initscr();
	keypad(stdscr, TRUE);

	lab.drucken();
	lab.erzeugen();
	lab.drucken();
	lab.exportDatei("lab.txt");
	Labyrinth lab2;
	lab2.importDatei("lab.txt");
	lab2.drucken();
	lab2.legeMuenzen();
	lab2.drucken();
	
	printw("press any key to continue...\n");
	getch();

	endwin();
}
