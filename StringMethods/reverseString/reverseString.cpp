#include <iostream>
#include "../inputString/inputString.cpp"
#include "../Pause/Pause.cpp"

using namespace std;

void reverseString(){
  string consoleInput = inputAString("Type a sentence.");

  int inputLength = consoleInput.length();
  for (int i = 0; i < inputLength / 2; i++){
    swap(consoleInput[i], consoleInput[inputLength - i - 1 ]);
  }

  cout << consoleInput << endl;

  pause();
}