#include <stdio.h>
#include <string.h>

struct house1
{
    unsigned int *number;
    unsigned int *members;
    char *item;
    char *name;
};

struct house2
{
    unsigned int number;
    unsigned int members;
    char item[100];
    char name[100];
};

int main(void)
{
    unsigned int number1 = 2;
    unsigned int number2 = 3;
    unsigned int members1 = 4;
    unsigned int members2 = 10;

    char *item1 = "Composter";
    char *item2 = "Smoker";
    char *name1 = "Farmer";
    char *name2 = "Butcher";

    // house 1 (Nr.2, family-members 4, item composter, name farmer)
    struct house1 h1;
    h1.number = &number1;
    h1.members = &members1;
    h1.item = item1;
    h1.name = name1;

    // print house 1
    printf("1st: %d  %d %s %s\n", *h1.number, *h1.members, h1.item, h1.name);

    // house 2 (Nr.3, family-members 10, item smoker, name butcher)
    struct house2 h2;
    h2.number = number2;
    h2.members = members2;
    strcpy(h2.item, item2);
    strcpy(h2.name, name2);

    // print house 1
    printf("2st: %d  %d %s %s\n", h2.number, h2.members, h2.item, h2.name);
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


