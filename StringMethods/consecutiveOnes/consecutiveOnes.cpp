#include <iostream>
#include "../inputString/inputString.h"
#include "../Pause/Pause.h"

using namespace std;

void consecutiveOnes(){
  bool prev = false, current=false;
  int currentCount {}, totalCount {};  
  string consoleInput = inputAString("Type a set of numbers to get the longest sequence of consecutive ones.").append(" ");

  for (auto letter : consoleInput){
    /*
    if letter = "1"
      ++currentCount
      if totalCount < currentCount
        totalCount = currentCount
      
    else if letter != "1"
      currentCount = 0
    */
    if (letter == '1'){
      ++currentCount;
      if (totalCount < currentCount){
        totalCount = currentCount;
      } else {
        currentCount = 0;
      }
    }
  }
  cout << totalCount << endl;
}