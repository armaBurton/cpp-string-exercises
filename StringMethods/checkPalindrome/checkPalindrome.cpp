#include <iostream>
#include "../inputString/inputString.h"
#include "../Pause/Pause.h"

using namespace std;

void checkPalindrome() {
  string consoleInput = inputAString("Enter text for palindrome check.");
  int length = (consoleInput.length() / 2);
  bool isPalindrome = true;

  for (int i = 0; i < length; i++){
    // if (consoleInput[i] != consoleInput[consoleInput.length() - i]){
    //   isPalindrome = false;

    //   cout << "false\n";
    //   break;
    // }
    cout << consoleInput[i] << " " << consoleInput[consoleInput.length() - 1 - i] << endl;
  }



}