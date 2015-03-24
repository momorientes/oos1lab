#include "Position.hpp"

const int kZeilen = 11;
const int kSpalten = 11;

enum Symbole { MAUER = '#', WEG = ' ', MUENZE = ':', NL = '\n', 
	EOS = '\0', ICH = 'X', GEIST = 'G' };

class Labyrinth
{
	public:
		Labyrinth();
		void initialisieren();
		void erzeugen();
		void drucken();
		int getZeilen();
		int getSpalten();
		int getAnzGeister();
		int getMuenzen();
		void legeMuenzen();
		void zeichneChar(char c, Position pos);
		void zeichneChar(char c, Position posalt, Position posneu);
		char getZeichenAnPos(Position pos);
		bool istMuenzeAnPos(Position pos);
		void exportDatei(const char * dateiname);
		void importDatei(const char * dateiname);



	private:
		int labZeilen;
		int labSpalten;
		int labAnzGeister;
		int muenzen;
		char lab[kZeilen][kSpalten + 2];
};
