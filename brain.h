/*
 * main.h
 *
 *  Created on: 01-Mar-2018
 *      Author: charan_gotham
 */

#ifndef BRAIN_H_
#define BRAIN_H_

struct Code {
  int n;
  int s;
  int a;
  int u;
  std::vector<std::string> code_word;
};

// Converts a given number to binary string of length 'n'.
std::string GetBinaryString(int val, int n);

// Checks if the given vector is a valid codeword.
bool CheckString(std::string x, int n, int s, int a, int u);

// returns the sum of (i * x_i) for each position in x.
int GetSumForString(std::string x);

// returns the sum of (i * x_i) for each position in x and mod(u) is applied.
int GetResidueForString(std::string x, int u);

#endif /* BRAIN_H_ */
