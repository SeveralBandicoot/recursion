/*

Recursion Example

@ AJ Enrique Arguello 

10/11/2024

Objectives: Research Recursion. What is recursion? Create a simple example

New Concepts: Recursion

*/

#include <iostream>

using namespace std;

void apple(int apples);

int main() {

  apple(100); // calls apple function

  return 0;
}

void apple(int apples) {
  if (apples > 0) { // if int apples is more than 0
    cout << "You took " << apples << " apple(s)\n";
    apple(apples - 1); // apple function calls itself while the integer apples decreases by 1 
  }
}