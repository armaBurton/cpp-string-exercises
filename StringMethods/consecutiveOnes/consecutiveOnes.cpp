#include <iostream>
#include "../inputString/inputString.h"
#include "../Pause/Pause.h"

using namespace std;

void consecutiveOnes(){
  bool prev = false, current=false;
  int currentCount {}, totalCount {};  
  string consoleInput = inputAString("Type a set of numbers to get the longest sequence of consecutive ones.").append(" ");

  for (auto letter : consoleInput){
    if (letter == '1'){
      ++currentCount;
      if (totalCount < currentCount){
        totalCount = currentCount;
      }
    } else {
      currentCount = 0;
    }
  }
  cout << endl 
       << "The total amount of consecutive ones is " << totalCount << endl;

  pause();
}