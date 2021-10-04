// Library Zeugs
#include "iq_cpp.h"
using namespace vex;

// Variablen
char GAME = 'R';
int cycle;
int player;
int gameBoard[6][7];

/*
Checkt ob ein Spieler
4 Chips in einer Reihe hat.
*/
bool checkForWin(int player)
{
  // Horizontal
  for(int i = 0; i < 7; i++)
  {
    return true;
  }

  return false;
}

/*
Diese Methode ändert den Wert
der Variable 'GAME', welche für
das Arbeiten des Programms 
verantwortlich ist
*/
void toggle()
{
  if (GAME == 'R')
  {
    GAME = 'S';
  }
  else
  {
    GAME = 'R';
  }
}
/*
Diese Methode checkt ob der
Wert von 'GAME' auf 'Running'
oder 'Stopped' steht, und
gibt dann einen Wert zurück
der das Programm laufen lässt
oder stoppt.
*/
bool check()
{
  if (GAME == 'R')
  {
    return true;
  }
  else
  {
    return false;
  }
}

/*
Initialisiert das 'GameBoard'.
*/
void init()
{
  for(int i = 0; i < 6; i++)    // Wiederholt für 6 mal
  {
    for(int j = 0; j < 7; j++)  // Wiederholt für 7 mal
    {
      gameBoard[static_cast<int>(i)][static_cast<int>(j)] = 0;
    }
  }
  cycle = 0;
  player = 1;
}
/*
Diese Methode wiederholt sich
1s/0.020s = 50 mal in der Sekunde.
Übernimmt die Spiellogik.
*/
void mainLoop()
{
  init();
  while (check())
  {
    for (; cycle < (7*6); cycle++)  // Wiederholt 42 mal (Maximale Anzahl an Zügen/Runden)
    {
      checkForWin();
      checkForWin()
    }
    wait(20, msec); // 0.020s
  }
}

/*
MAIN METHODE
*/
int main() 
{
  mainLoop();
}
