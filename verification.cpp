#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "verification.h"
using namespace std;

void luhn_algorithm(vector<int> card_number, int length){

  vector<int> new_arr;
  int sum = 0;
  int total = 0, arr_total = 0, new_arr_sum = 0;

  if (length < 13 || length > 16) {
    cout << "The card number is invaliid." << endl;
  }else{
    for (int i = 0; i < length; i+=2) {
      int num = card_number[i] * 2;
      if (num > 9) {
        for (int j = 0; j < 2; j++) {
          int a = num % 10;
          num /= 10;
          sum += a;
        }
        new_arr.push_back(sum);
      }else{
        new_arr.push_back(num);
      }
      sum = 0;
    }

    //calculating arr_total.
    for (int i = 1; i < length; i+=2) {
      arr_total += card_number[i];
    }
    //calculating new_arr_sum.
    for (int i = 0; i < new_arr.size(); i++) {
      new_arr_sum += new_arr[i];
    }
    //calculating total;
    total = arr_total + new_arr_sum;

    //LOGIC
    if (total % 10 == 0) {
      cout << "The card number is valid. (Exclluding all characters and letters)." << endl;
    }else{
      cout << "The card number is invalid" << endl;
    }
  }
}
