#include <iostream>
#include "../inputString/inputString.h"
#include "../Pause/Pause.h"

using namespace std;

void countedVowels(){
  string consoleInput = inputAString("Type a sentence to get the vowel count.");
  int count = 0;

  for (auto letter : consoleInput){
    switch (letter)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':

      count++;
      break;
    
    default:
      break;
    }
  }

  cout << endl
       << "The total amount of vowels in the entered sentence is, " << count << endl;

  pause();
  
}