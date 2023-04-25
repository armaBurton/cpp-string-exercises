#include <iostream>
#include "../inputString/inputString.h"
#include "../Pause/Pause.h"

using namespace std;

void consecutiveOnes(){
  bool prev = false;
  int currentCount {}, totalCount {};  
  string consoleInput = inputAString("Type a set of numbers to get the longest sequence of consecutive ones.").append(" ");

  for (auto letter : consoleInput){
    //if letter == 1
      //if prev = true
        //current++
      //prev = true
      //if current > count
        //count = current
    //else if letter != 1
      //prev = false
      //current = 0
    if (letter == '1'){
      cout << letter << endl;
      if (prev == true){
        currentCount++;
      }
      if (currentCount > totalCount){
        totalCount = currentCount;
      }
      prev = true;
    }else if (letter != '1'){
      prev = false;
      currentCount = 0;
    }
  }
  cout << totalCount << endl;
}