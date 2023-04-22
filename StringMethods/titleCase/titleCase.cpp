#include <iostream>
#include "../inputString/inputString.cpp"
#include "../Pause/Pause.cpp"

using namespace std;

void titleCase(){
  string consoleInput = inputAString("Type a sentence to convert into Title Case.").append(" ");
  string temp {};
  int count = 0;


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