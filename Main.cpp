/**
Christopher Galdi
2299616
galdi@chapman.edu
CPSC 350-01
Assignment1

This file asks the user to input the name of the file being processed.
**/

#include "Dna.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  Dna d;

  bool loop = true;

  while (loop)
  {
  cout << "What is the name of the file that you want to process?\n"; //Prompts user to insert DNA file.
  string userInput;

  getline(cin, userInput);
  d.readFile(userInput);

  d.outputData("chrisgaldi.out"); // output all stats and outputs it to a .out file to display statistics.

  bool invalidInput = true; //checks to see if they entered an invalid file type and then sends it into a while loop.
  while (invalidInput) //while loop that prompts the user for another file because there was a previous invalid file type.
  {
    cout << "Would you like to process another file? Y or N?\n";
    getline(cin, userInput);
    if (userInput == "Y" || userInput == "y")
      {
        invalidInput = false;
      }
      if (userInput == "N" || userInput == "n")
      {
        invalidInput = false;
        loop = false; //exits the file if you no files are able to be called and input.
      }
    }

    }

    return 0;
}
