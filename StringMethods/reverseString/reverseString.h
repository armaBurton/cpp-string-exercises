#include <iostream>
#include "../Pause/Pause.h"
#include "../InputAString/InputAString.h"

using namespace std;

Pause pause;
InputAString inputAString;

struct reverseString {
  static void stringReverse(){
    string consoleInput = inputAString.stringToInput("Enter a string to reverse:");

    int inputLength = consoleInput.length();
    for (int i = 0; i < inputLength / 2;i++){
      swap(consoleInput[i], consoleInput[inputLength - 1 - i]);
    }
    cout << consoleInput << endl;
  
    pause.waitForKeyStroke();
  }
};