#include <iostream>
#include <conio.h>

using namespace std;

string inputAString(string inputString){
  string consoleInput;
  cout << endl << inputString << endl;
  cin.ignore();
  getline(cin, consoleInput);

  return consoleInput;
}
