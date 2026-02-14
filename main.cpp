#include <iostream>
#include <string>
#include <vector>
#include "verification.h"
using namespace std;

/*
 This program uses Luhn's algorithm to validate credit card number.
 Check out the function file to see how it works.
 */

/*
 Feature to add later: I'll add a valid creditcard number generator soon.
 TODO: Add a valid card number generator too.
 */

vector<int> str_to_array(string str);

int main (int argc, char *argv[]) {

  int length;
  string str; //cleaned up string. rejects white spaces and characters/letters
  string raw_str;
  
  cout << "Enter the credit card number to verify: ";
  getline(cin, raw_str);

  for(char c : raw_str){
    if (c >= '0' && c <= '9') {
      str += c;
    }
  }

  //assigning the digit array to this array.
  vector<int> card_number = str_to_array(str);
  length = card_number.size();
  
  luhn_algorithm(card_number, length);

  return 0;
}

//turning string to intager array and eliminates any white spaces.
vector<int> str_to_array(string str){
  vector<int> digits(str.size());

  for (size_t i = 0; i < str.size(); ++i) {
      digits[i] = str[i] - '0';
  }
  return digits;
}
