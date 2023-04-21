#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

string inputAString(string inputString){
  string consoleInput;
  cout << endl << inputString << endl;
  cin.ignore();
  cout << "? ";
  getline(cin, consoleInput);

  return consoleInput;
}
