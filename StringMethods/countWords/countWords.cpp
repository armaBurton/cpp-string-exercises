#include <iostream>
#include "../inputString/inputString.h"
#include "../Pause/Pause.h"

void countWords(){
  string consoleInput = inputAString("Type a sentence. Then number of words will be returned.");

  for (auto letter : consoleInput){
    if (letter != ' '){

      cout << letter << endl;
    } else if (letter == '\n'){
      cout << "new line\n";
    }
  }

  pause();
}