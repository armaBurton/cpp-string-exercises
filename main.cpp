#include <iostream>
#include <string>
#include "StringMethods\StringMethods.h"

int main(void){
  std::string option;
  
  StringMethods methodChooser;

  while(true){
    std::cout << "\nC++ String Exercises\n"
              << "Select an option:\n"
              << "\n"
              << "1. Reverse\n"
              << "2. Title Case\n"
              << "3. Find Largest Word\n"
              << "4. Count the Vowels"
              << "Q. quit\n";
    std::cin >> option;

    if (option == "q" || option == "Q"){
      break;
    } else if (option == "1"){
      methodChooser.reverseAString();
    } else if (option == "2"){
      methodChooser.toTitleCase();
    } else if (option == "3"){
      methodChooser.getBiggestWord();
    } else if (option == "4"){
      methodChooser.countVowels();
    }
  }

  return 0;
}