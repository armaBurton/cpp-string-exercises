#include <iostream>
#include <conio.h>
#include "Pause.h"

using namespace std;

void pause (){
  char keypress {};
  do{
    cout << "\nPress any key to continue...\n"
          << "? ";
    keypress = _getch();
  }while(!keypress);
  cout << endl;
}
