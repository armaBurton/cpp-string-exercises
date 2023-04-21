#include <iostream>
#include <conio.h>

using namespace std;

class StringMethods {
public:
  static void reverseString(){
    string consoleInput, reverseInput;


    cout << "\nEnter a string to reverse:\n";
    cin.ignore();
    getline(cin, consoleInput);
    int inputLength = consoleInput.length();
    for (int i = 0; i < inputLength / 2;i++){
      swap(consoleInput[i], consoleInput[inputLength - 1 - i]);
    }

    cout << consoleInput << endl;
    
    char keypress {};

    cout << endl << keypress << endl;
    do{
      cout << "\nPress any key to continue...\n"
           << "? ";
      keypress = _getch();
    }while(!keypress);
    cout << endl;
  }
  

};