#include <iostream>
#include <conio.h>
#include "./reverseString/reverseString.cpp"
#include "./titleCase/titleCase.cpp"
#include "./biggestWord/biggestword.cpp"

using namespace std;

struct StringMethods {
  static void reverseAString(){
    reverseString();
  }

  static void toTitleCase(){
    titleCase();
  }

  static void getBiggestWord() {
    biggestWord();
  }
};