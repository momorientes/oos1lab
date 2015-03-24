// Main für Hausaufgabe 2
#include "Labyrinth.hpp"

int main() {
	Labyrinth lab;
	lab.drucken();
	lab.erzeugen();
	lab.drucken();
	lab.exportDatei("lab.txt");
	Labyrinth lab2;
	lab2.importDatei("lab.txt");
	lab2.drucken();
	lab2.legeMuenzen();
	lab2.drucken();
}
