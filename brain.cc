/*
 * main.cc
 *
 *  Created on: 01-Mar-2018
 *      Author: charan_gotham
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

#include "brain.h"

using namespace std;

string GetBinaryString(int val, int n) {
  string binary_string = "";
  while (val != 0) {
      if (val % 2 == 0) binary_string = "0" + binary_string;
      else binary_string = "1" + binary_string;
      val /= 2;
  }
  while (binary_string.length() != n) {
      binary_string = "0" + binary_string;
  }
  return binary_string;
}

bool CheckString(string x, int n, int s, int a, int u) {
  int x_length = x.length();
  int sum = 0;
  for (int i = 0; i < x_length; ++i) {
      sum += (i + 1) * (x[i] - '0');
  }
  if (sum % u == a) return true;
  return false;
}

int main() {
  Code code;
  cin >> code.n >> code.s >> code.a >> code.u;
  int size = pow(2.0, (double)code.n);
  for (int i = 0; i < size; ++i) {
      string x = GetBinaryString(i, code.n);
      if (CheckString(x, code.n, code.s, code.a, code.u)) {
	  code.code_word.push_back(x);
      }
  }
  int code_size = code.code_word.size();
  cout << "Cardinality of code:- " << code_size << endl;
  for (int i = 0; i < code_size; ++i) {
      cout << code.code_word[i] << endl;
  }
  return 0;
}
