#include <iostream>

using namespace std;

class StringMethods {
public:
  static void reverseString(){
    string consoleInput;

    cout << "\nEnter a string:\n";
    cin.ignore();
    getline(cin, consoleInput);
    cout << "\n" << consoleInput << endl;
  }
  
};