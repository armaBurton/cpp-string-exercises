#include <iostream>
#include "../inputString/inputString.h"
#include "../Pause/Pause.h"

using namespace std;

void biggestWord(){
  string consoleInput = inputAString("Input a sentence and get the biggest word back.");
  cout << consoleInput << endl;


  pause();
}