#include <iostream>
#include "../inputString/inputString.h"
#include "../Pause/Pause.h"

void countWords(){
  string consoleInput = inputAString("Type a sentence. Then number of words will be returned.").append(" ");
  int wordCount = 0;

  for (int i = 0, len = consoleInput.size(); i < len; i++){
    if (ispunct(consoleInput[i])){
      consoleInput.erase(i--, 1);
      len = consoleInput.size();
    }
  }

  for (auto letter : consoleInput){
     if (letter == ' '){
      wordCount++;
    }
  }

  cout << endl
       << "There are " << wordCount << " words in your sentence.\n";

  pause();
}