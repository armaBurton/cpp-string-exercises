#include <iostream>
#include <conio.h>
#include "Pause.h"

using namespace std;

void pause (){
  char keypress {};
  do{
    cout << "\n\n(Press any key to continue)";
    keypress = _getch();
  }while(!keypress);
  cout << endl;
}
