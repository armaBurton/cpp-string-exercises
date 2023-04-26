#include <iostream>
#include <conio.h>
#include "./reverseString/reverseString.cpp"
#include "./titleCase/titleCase.cpp"
#include "./biggestWord/biggestword.cpp"
#include "./countedVowels/countedVowels.cpp"
#include "./consecutiveOnes/consecutiveOnes.cpp"
#include "./removeCharacter/removeCharacter.cpp"

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

  static void countVowels(){
    countedVowels();
  }

  static void countConsecutiveOnes(){
    consecutiveOnes();
  }

  static void removeACharacter(){
    removeCharacter();
  }
};