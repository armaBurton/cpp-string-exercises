#include <iostream>
#include "../inputString/inputString.h"
#include "../Pause/Pause.h"

using namespace std;

void titleCase(){
  string consoleInput = inputAString("Type a sentence to Title Case.");

  cout << endl << consoleInput << endl;

  pause();
}