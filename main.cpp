#include <iostream>
#include <string>
#include "StringMethods\StringMethods.h"

int main(void){
  char option;
  bool loop = true;
  StringMethods methodChooser;

  do{
    std::cout << "\nC++ String Exercises\n"
              << "Select an option:\n"
              << "\n"
              << "1. Reverse\n"
              << "2. Title Case\n"
              << "3. Find Largest Word\n"
              << "4. Count the Vowels\n"
              << "5. Consecutive Ones\n"
              << "6. Remove a Character\n"
              << "7. Count Words\n"
              << "8. Palindrome Checker\n"
              << "9. Word Reverser\n"
              << "Q. quit\n"
              << endl;
    std::cin >> option;

    switch (option)
    {
    case 'q':
    case 'Q':
      loop = false;
      break;
    case '1':
      methodChooser.reverseAString();
      break;
    case '2':
      methodChooser.toTitleCase();
      break;
    case '3':
      methodChooser.getBiggestWord();
      break;
    case '4':
      methodChooser.countVowels();
      break;
    case '5':
      methodChooser.countConsecutiveOnes();
      break;
    case '6':
      methodChooser.removeACharacter();
      break;
    case '7':
      methodChooser.countAllWords();
      break;
    case '8':
      methodChooser.palindrome();
      break;
    case '9':
      methodChooser.wordReverser();
      break;
    default:
      break;
    }
  } while(loop);

  return 0;
}