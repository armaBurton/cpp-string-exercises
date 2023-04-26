#include <iostream>
#include <string>
#include "StringMethods\StringMethods.h"

int main(void){
  char option;
  
  StringMethods methodChooser;

  while(true){
    std::cout << "\nC++ String Exercises\n"
              << "Select an option:\n"
              << "\n"
              << "1. Reverse\n"
              << "2. Title Case\n"
              << "3. Find Largest Word\n"
              << "4. Count the Vowels\n"
              << "5. Consecutive Ones\n"
              << "6. Remove a Character\n"
              << "Q. quit\n"
              << endl;
    std::cin >> option;

    // if (option == "q" || option == "Q"){
    //   break;
    // } else if (option == "1"){
    //   methodChooser.reverseAString();
    // } else if (option == "2"){
    //   methodChooser.toTitleCase();
    // } else if (option == "3"){
    //   methodChooser.getBiggestWord();
    // } else if (option == "4"){
    //   methodChooser.countVowels();
    // } else if (option == "5"){
    //   methodChooser.countConsecutiveOnes();
    // } else if (option == "6"){
    //   methodChooser.removeACharacter();
    // }
    switch (option)
    {
    case 'q':
    case 'Q':
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
    default:
      break;
    }
  }


  return 0;
}