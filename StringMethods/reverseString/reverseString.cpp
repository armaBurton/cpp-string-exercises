#include <iostream>
#include "../inputString/inputString.h"
#include "../Pause/Pause.h"

using namespace std;

void reverseString(){
  string consoleInput = inputAString("Type a sentence to reverse.");

  int inputLength = consoleInput.length();
  for (int i = 0; i < inputLength / 2; i++){
    swap(consoleInput[i], consoleInput[inputLength - i - 1 ]);
  }

  cout << consoleInput << endl;

  pause();
}