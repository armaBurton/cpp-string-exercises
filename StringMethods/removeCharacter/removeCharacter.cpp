#include <iostream>
#include <algorithm>
#include "../inputString/inputString.h"
#include "../Pause/Pause.h"

using namespace std;

void removeCharacter() {
  string consoleInput = inputAString("Type a sentence.");
  string characterInput {};
  cout << endl 
       << "Type a single character to remove from the previous sentence." << endl;
  cin >> characterInput;


  consoleInput.erase(remove(consoleInput.begin(), consoleInput.end(), characterInput),consoleInput.end());

  cout << consoleInput << endl;


  pause();
}