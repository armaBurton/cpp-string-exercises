#include <iostream>
#include "../inputString/inputString.h"
#include "../Pause/Pause.h"

using namespace std;

void titleCase(){
  string consoleInput = inputAString("Type a sentence to convert into Title Case.");
  string temp {};
  int count = 0;

  consoleInput.append(" ");

  for (auto letter : consoleInput){
    count++;
    if (letter != ' '){
      temp = temp + letter;
    } else if (letter ==  ' '){
      temp[0] = toupper(temp[0]);
      cout << temp << " ";
      temp = "";
    }
  }

  pause();
}