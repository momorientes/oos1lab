#include "PacMan.hpp"
#include <curses.h>

// const bool kErzeugen = true;

int main(int argc, char** argv) {
	// init curses
	initscr();
	keypad(stdscr, TRUE);

	Labyrinth lab;

	// irgendein parameter übergeben? Labyrinth erzeugen!
	if (argc > 1) {
		lab.erzeugen();
		lab.exportDatei("lab.txt");
	}
	else {
		lab.importDatei("lab2.txt");
		lab.legeMuenzen();
		Spieler s("Demo");
		Spieler g[kAnzGeister] = { Spieler("Geist 1"), 
			                       Spieler("Geist 2"), 
			                       Spieler("Geist 3") };
		PacMan pm(lab, s, g, kAnzGeister);
		pm.spielen();
	}

	endwin(); // free curses
}


