#include <iostream>
#include <string>
#include "StringMethods/StringMethods.h"

int main(void){
  std::string option;
  
  StringMethods methodChooser;

  while(true){
    std::cout << "\nC++ String Exercises\n"
              << "Select an option:\n"
              << "\n"
              << "1. Reverse\n"
              << "2. Title Case\n"
              << "999. quit\n";
    std::cin >> option;

    if (option == "999"){
      break;
    } else if (option == "1"){
      methodChooser.reverseString();
    } else if (option == "2"){
      methodChooser.titleCase();
    }
    
  }

  return 0;
}