#include <iostream>
#include "../inputString/inputString.h"
#include "../Pause/Pause.h"

using namespace std;

void titleCase(){
  string consoleInput = inputAString("Type a sentence to convert into Title Case.");
  string temp {};

  for (auto letter : consoleInput){
    if (letter != ' '){
      temp = temp + letter;
    } else if (letter ==  ' '){
      cout << temp << endl;
      temp = "";
    }
  }

  pause();
}