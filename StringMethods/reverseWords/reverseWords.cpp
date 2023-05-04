#include <iostream>
#include "../inputString/inputString.h"
#include "../Pause/Pause.h"

using namespace std;

void reverseWords() {
  string consoleInput = inputAString("Enter a sentence to have it's words reversed");
  string tempWordHolder {},
         newString {},
         reversedWord;

  
  for (auto letter : consoleInput){
    if (letter != ' '){
      tempWordHolder += letter;
    } else {
      for (int i = tempWordHolder.length() - 1; i >= 0; i--){
        reversedWord += tempWordHolder[i];
      }      
      newString += reversedWord;
      tempWordHolder = "";
      reversedWord = "";
    }
  }
  cout << newString << endl;
  
  pause();
}