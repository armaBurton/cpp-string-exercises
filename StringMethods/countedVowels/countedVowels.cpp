#include <iostream>
#include "../inputString/inputString.h"
#include "../Pause/Pause.h"

using namespace std;

void countedVowels(){
  string consoleInput = inputAString("Type a sentence to get the vowel count.");
  int count = 0;

  for (auto letter : consoleInput){
    cout << letter << endl;
  }
  
}