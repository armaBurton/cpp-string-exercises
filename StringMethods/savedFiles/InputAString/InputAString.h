#include <iostream>
#include <conio.h>

using namespace std;

struct InputAString{
  static string stringToInput(string inputString){
    string consoleInput;
    cout << endl << inputString << endl;
    cin.ignore();
    getline(cin, consoleInput);

    return consoleInput;
  }
};