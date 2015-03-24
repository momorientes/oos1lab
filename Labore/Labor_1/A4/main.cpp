/*

Spiel Tsching, Tschang, Tschong

Regeln:
Es gibt zwei Spieler: der Programmierer und der Computer.
Beide Spieler waehlen gleichzeitig eines der drei Objekte
Stein, Schere und Papier. Beide können das gleiche Objekt wählen.
Der Spieler, der das mächtigere Objekt gewählt hat gewinnt.
SCHERE kann einen STEIN nicht zerschneiden, d.h. STEIN ist 
mächtiger als SCHERE. PAPIER wickelt STEIN ein, d.h. PAPIER ist 
mächtiger als STEIN. SCHERE zerschneidet PAPIER, d. h. SCHERE 
ist maechtiger als PAPIER

*/

#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
using namespace std;

// Aufzählungstyp für Stein etc.
enum objectType { STEIN, SCHERE, PAPIER };

// Struktur für einen Spieler bestehend aus Name und Wahl 
// des Spielers
struct player {
	const char * name;
	objectType choice;
};

// Variable für den Namen des Spielers 
char name[15];

// Name des Spielers eingeben
char * enterName(char str[])
{
    cout << "Namen eingeben: ";
    cin >> str;
    return str;
}

// Den Computer zufällig waehlen lassen. 
// Nutzen Sie srand(...) und rand().
objectType randomChoice()
{
    //time based seed, enough entropy!
    srand(time(NULL));
    // get the choice
    objectType choice = static_cast<objectType>(rand() % 3);
    return choice;
}

// Die Wahl von STEIN etc. als String zurückgeben lassen
const char * object2str(objectType o)
{
    switch(o)
    {
        case SCHERE: return "Schere";
        case STEIN: return "Stein";
        case PAPIER: return "Papier";
    }
}

// Einen Text mit dem Namen des Spielers und seiner Wahl ausgeben
void showPlayer(player p)
{
    cout << "Spieler: " << p.name << " Wahl: " << object2str(p.choice) << endl;
}

// Die Wahl des Spielers abfragen
objectType enterChoice()
{
   objectType choice;
   char input[7];
   cout << "schere, stein, oder papier? ";
   cin >> input;
   if(strcmp(input,"schere") == 0)
   {
       choice = SCHERE;
   } else if(strcmp(input, "stein") == 0)
   {
       choice = STEIN;
   } else if (strcmp(input, "papier") == 0)
   {
       choice = PAPIER;
   } else {
       cout << "Unknown choice!" << endl;
       exit(1);
   }
   return choice;
}

// Die Wahl bestimmen, die gewonnen hat
objectType winningObject(objectType obj1, objectType obj2)
{

    if(obj1 == SCHERE)
    {
        if(obj2 == STEIN)
        {
            return STEIN;
        }
        if(obj2 == PAPIER)
        {
            return SCHERE;
        }
    }

    if(obj1 == STEIN)
    {
        if(obj2 == SCHERE)
        {
            return STEIN;
        }
        if(obj2 == PAPIER)
        {
            return PAPIER;
        }
    }

    if(obj1 == PAPIER)
    {
        if(obj2 == SCHERE)
        {
            return SCHERE;
        }
        if(obj2 == STEIN)
        {
            return PAPIER;
        }
    }

}

// Ausgeben, wer gewonnen hat
void showWinner(player p1, player p2)
{
    if(p1.choice == p2.choice)
    {
        cout << "unentschieden" << endl;
        exit(0);
    }
    objectType winner = winningObject(p1.choice, p2.choice);

    if(winner == p2.choice)
    {
        cout << "Gewonnen!" << endl;
    } else {
        cout << "Verloren!" << endl;
    }

}

int main()
{
	player player1, player2;
	player1.name = "Computer";
	player1.choice = randomChoice();
	cout << "Der Computer hat seine Wahl getroffen." << endl;
	player2.name = enterName(name);
	player2.choice = enterChoice();
	showPlayer(player1);
	showPlayer(player2);
	showWinner(player1, player2);
}


