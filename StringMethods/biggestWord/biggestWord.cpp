#include <iostream>
#include "../inputString/inputString.h"
#include "../Pause/Pause.h"

using namespace std;

void biggestWord(){
  string consoleInput = inputAString("Input a sentence and get the biggest word back.").append(" ");
  cout << consoleInput << endl;
  int currentCount = 0, previousCount = 0;
  string currentBiggest {}, newWord {};

  for (auto letter : consoleInput){
    if (letter != ' '){
      newWord = newWord + letter;
    } else if (letter == ' '){
      if (newWord.length() > currentBiggest.length()){
        currentBiggest = newWord;
      }
      newWord = "";
    }
  }
  cout << currentBiggest << endl;

  pause();
}