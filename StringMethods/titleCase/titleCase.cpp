#include <iostream>
#include "../inputString/inputString.h"
#include "../Pause/Pause.h"

using namespace std;

void titleCase(){
  string consoleInput = inputAString("Type a sentence to convert into Title Case.");

  for(int i = 0; i < consoleInput.length(); i++ ){
    
  }

  cout << endl << consoleInput << endl;

  pause();
}