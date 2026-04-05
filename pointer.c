#include <stdio.h>
#include <string.h>

struct house1 // --- THE DISTANT HOUSE (Everything is somewhere else) ---
{
    unsigned int *number;  // 🪧 Sign(*) -> 📍 Location of ➕ POSITIVE number
    unsigned int *members; // 🪧 Sign(*) -> 📍 Location of 🧩 Member-Counts
    char *item;            // 🪧 Sign(*) -> 📍 Location of 🧱 ITEM-Text
    char *name;            // 🪧 Sign(*) -> 📍 Location of 📝 NAME-Text
};

struct house2 // --- THE LOCAL HOUSE (Everything is built-in) ---
{
    unsigned int number;    // 🏠 Home( ) -> 📍 Directly here: ➕ POSITIVE number
    unsigned int members;   // 🏠 Home( ) -> 📍 Directly here: 🧩 Member-Counts
    char item[100];         // 🏠 Home[ ] -> 📍 Directly here: 🧱 ITEM-Shelf (100)
    char name[100];         // 🏠 Home[ ] -> 📍 Directly here: 📝 NAME-Row   (100)
};

int main(void)
{
// =========================================================
// 📦 THE GLOBAL SUPPLY (The original blocks in memory)
// =========================================================

    unsigned int number1 = 2;   // ➕ POSITIVE number -> house1
    unsigned int number2 = 3;   // ➕ POSITIVE number -> house2
    unsigned int members1 = 4;  // 🧩 Member-Counts -> house1
    unsigned int members2 = 10; // 🧩 Member-Counts -> house2

    char *item1 = "Composter";  // 🧱 ITEM-Text -> house1
    char *item2 = "Smoker";     // 🧱 ITEM-Text -> house2
    char *name1 = "Farmer";     // 📝 NAME-Text -> house1
    char *name2 = "Butcher";    // 📝 NAME-Text -> house2

// =========================================================
// 🏘️ HOUSE 1: THE LINKER (Wired to the Supply)
// =========================================================

    struct house1 h1;        // struct = blueprint
    h1.number = &number1;    // 🔗[NEW LINK] <<----number1
    h1.members = &members1;  // 🔗[NEW LINK] <<----members1
    h1.item = item1;         // 🔗[USE LINK] <<----item1
    h1.name = name1;         // 🔗[USE LINK] <<----name1


    // 📣 PRINT 1: Follow the wires to the supply!
    printf("1st: %d  %d %s %s\n", *h1.number, *h1.members, h1.item, h1.name);

// =========================================================
// 🏠 HOUSE 2: THE OWNER (Self-Contained Fortress)
// =========================================================

    struct house2 h2;        // struct = blueprint for a local building
    h2.number = number2;     // 📑 [COPY VALUE]: number2(global supply) -> to: h2.number(house)
    h2.members = members2;   // 📑 [COPY VALUE]: members2(global supply) -> to: h2.members(house)

    strcpy(h2.item, item2);  // 📥 [FILL DATA] <<---- into local item-shelf
    strcpy(h2.name, name2);  // 📥 [FILL DATA] <<---- into local name-row


    // 📣 PRINT 2: Read directly from the house's own inventory!
    printf("2nd: %d  %d %s %s\n", h2.number, h2.members, h2.item, h2.name);
    return 0;
}



/*


Villager Roles (Dorfbewohner-Berufe)
Armorer (Rüstungsschmied)
Butcher (Metzger)
Cartographer (Kartograf)
Cleric (Geistlicher)
Farmer (Bauer)
Fisherman (Fischer)
Fletcher (Pfeilmacher)
Leatherworker (Gerber)
Librarian (Bibliothekar)
Mason (Maurer)
Shepherd (Schäfer)
Toolsmith (Werkzeugschmied)
Weaponsmith (Waffenschmied)
Nitwit (Nichtsnutz)
Unemployed (Arbeitslos)
Illagers & Enemies (Feindliche Bewohner)
Pillager (Plünderer)
Vindicator (Diener)
Evoker (Magier)
Illusioner (Illusionist)
Vex (Plagegeist)
Ravager (Verwüster)
Witch (Hexe)
Special Characters (Besondere NPCs)
Wandering Trader (Fahrender Händler)
Trader Llama (Händler-Lama)
Iron Golem (Eisengolem)
Zombie Villager (Zombie-Dorfbewohner)
Default Player Skins (Standard-Skins)
Steve
Alex
Ari, Efe, Kai, Makena, Noor, Sunny, Zuri


