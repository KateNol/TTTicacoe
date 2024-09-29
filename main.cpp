#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

char field[10];
/*
funktionsaufruf einer c++ Funktion um das Feld nach jedem Zug wieder frei zu machen und einen 
nächsten Zug machen zu könnnen
 */ 
void clearConsole() 
{
    system("clear");
}
/**
 *  Diese Methode setzt das Spielfeld zurück, indem sie das field-Array mit leeren Zeichen (' ') füllt.
    Wichtig: Das field-Array hat 10 Felder, obwohl nur 9 für das Tic-Tac-Toe-Spiel benötigt werden (die Indizes 1 bis 9). Der Index 0 wird einfach ignoriert, was eine gängige Praxis in Spielen ist, um den Zugriff auf die Felder 1 bis 9 zu erleichtern.
    Zweck: Diese Methode sorgt dafür, dass das Spielfeld in einem neuen Spiel leer ist, ohne vorherige Werte oder Symbole.
 */
void resetField() 
{
    for (int i = 0; i<10; i++){
        field[i] = ' ';
    }
}

void menu() 
{
    while(true) //endlos Schleife um immer das Feld zu zeichnen
    { 
        resetField(); // damit alle Eingaben nach jedem Spiel gelöscht werden
        char inputmenu; // Eingangsvariable
        cout << "\n\n" // Ausgabeoperator leitet nachfoldense in den Konsolenausgabestrom
             << "MENU\n\n" 
             << "1: Singleplyer\n"
             << "2: Multiplayer\n"
             << "3: Help\n"
             << "4: Quit\n\n\n"
             << "Input: ";
        cin >> inputmenu; // aus der Konsole lesen in die Variable zu schreiben
    }
}
/**
 * erstellt das Spielfeld und lässt das Feld immer in spielbaren Zustand sein
 */
void drawField() 
{
    clearConsole(); // wird nur benötigt wenn tatsächlich gespielt wird
    cout << "\n\n\n"
         << "  " << field[1] << " | " << field[2]  << "  | " << field[3] <<endl
         << "---|---|---" << endl
         << "  " << field[4] << " | " << field[5]  << "  | " << field[6] <<endl
         << "---|---|---" << endl
         << "  " << field[7] << " | " << field[8]  << "  | " << field[9] <<endl;
        

}

int main() {


   // drawField();

    return 0;
}