#include <iostream>
#include "../inputString/inputString.h"
#include "../Pause/Pause.h"

using namespace std;

void checkPalindrome() {
  string consoleInput = inputAString("Enter text for palindrome check.");
  int length = (consoleInput.length() / 2);
  bool isPalindrome = true;

  for (int i = 0; i < length; i++){
    if (consoleInput[i] != consoleInput[consoleInput.length() - 1 - i]){
      isPalindrome = false;
      break;
    }
  }

  if (isPalindrome){
    cout << endl
         << "Yes, the text \"" << consoleInput << "\" is a palindrome.\n";
  } else {
    cout << endl 
         << "No, the text \"" << consoleInput << "\" is not a palindrome.\n";  
  }
}