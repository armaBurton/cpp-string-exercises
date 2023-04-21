#include <iostream>
#include <conio.h>

using namespace std;

struct Pause {
  void waitForKeyStroke (){
    char keypress {};
    do{
      cout << "\nPress any key to continue...\n"
           << "? ";
      keypress = _getch();
    }while(!keypress);
    cout << endl;
  }
};