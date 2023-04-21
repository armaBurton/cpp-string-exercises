#include <iostream>
#include "../Pause/Pause.cpp"
#include "../InputAString/InputAString.cpp"

using namespace std;

public void reverseString(){
    string consoleInput = inputAString("Enter a string to reverse:");

    int inputLength = consoleInput.length();
    for (int i = 0; i < inputLength / 2;i++){
      swap(consoleInput[i], consoleInput[inputLength - 1 - i]);
    }
    cout << consoleInput << endl;
  
    pause();
  }
