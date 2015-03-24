// Vergleich von Deklaration, Enumeration und Typumwandlung 
// in C und C++

// Fehler                                               C    |  C++
//enum class enumeration { 1st, 2nd, 3rd, 4th };     // Z1      enum muss mit unterstrich oder zahl beginnen     | siehe C 
//enum class marks { '1', '2', '3', '4', '5', '6' }; // Z2          enum darf kein string sein | siehe C 
enum class class1 { DIETER, HANS, PETER, KAI };    // Z3           |
enum class class2 { ANDREA, KAI, SABINE, ZOE };    // Z4      enum muss eindeutig sein und darf nicht erneut verwendet werden (KAI)| siehe C 
enum class sports { FUSSBALL, BASKETBALL, HOCKEY };// Z5           |

int main(void)                               // Z7           |
{
	int i;                                   // Z8           typedef notwendig|
	sports mysport;                          // Z9           schon (falsch) deklariert| 
	//enum sports mysport;                     // Z10          | redaclaration 
	mysport = sports::FUSSBALL;                      // Z11          | 
	//mysport = FUSSBALL + 1;                  // Z12          |enum muss klar verwendet werden
	//mysport = 1;                             // Z13          |
	//mysport = 10;                            // Z14          |
	//mysport = mysport + 1;                   // Z15          |
	mysport = sports(int(mysport) + 1);           // Z16         cast in c ist sports() | funktioniert weil implicit cast 
	float f;                                 // Z17          | 
    
	for (i = int(sports::FUSSBALL); i <= int(sports::HOCKEY); i++)     // Z18          erroneus casts, for loops useless|
		mysport = sports(i);                 // Z19          | 
	for (int k = int(sports::FUSSBALL); k <= int(sports::HOCKEY); k++) // Z20          | 
		mysport = sports(k);                 // Z21          | 

   
	return 0;                                // Z22          |
}

