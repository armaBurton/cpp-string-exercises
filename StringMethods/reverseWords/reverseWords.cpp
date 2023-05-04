#include <iostream>
#include "../inputString/inputString.h"
#include "../Pause/Pause.h"

using namespace std;

void reverseWords() {
  string consoleInput = inputAString("Enter a sentence to have it's words reversed");
  string tempWordHolder {};
  
  for (auto letter : consoleInput){
    if (letter != ' '){
      tempWordHolder += letter;
    } else {
      cout << tempWordHolder << endl;
      tempWordHolder = "";
    }
  }

  
  pause();
}