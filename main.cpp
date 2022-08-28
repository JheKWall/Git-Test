/**
 * @file main.cpp
 * @author Kenneth Wallace
 * @date 2022-08-26
 * @brief Prints "Hello World!"
 * 
 * Utilizes the console output functionality to print a string of text ("Hello World!") to the console when the program is run.
 */

#include <iostream>
using namespace std;


/**
 * Takes an integer as a parameter and sums the numbers from 1 to n, returning it at the end.
 *
 * @param int n integer parameter
 * @pre an integer is given
 * @return int the sum of all numbers from 1 to n
 * @post none
 * 
 */
int sum(int n);


/**
 * Takes an integer as a parameter and computes the product from 1 to n, returning it at the end.
 *
 * @param int n integer parameter
 * @pre an integer is given
 * @return int the product of all numbers from 1 to n
 * @post none
 * 
 */
int product(int n);


int main() {

  cout << "Hello World!" << endl;

  int n;
  cout << "Please enter a number: (Please behave with your numbers)" << endl;
  cin >> n;

  cout << "The sum of all numbers from 1 to n is: " << sum(n) << endl;

  cout << "Please enter a number: " << endl;
  cin >> n;

  cout << "The product of all numbers from 1 to n is: " << product(n) << endl;
  
  return 0;
}


int sum(int n)
{
  if(n == 1)
    return 1;

  if(n > 1)
    return n + sum(n - 1);

  return n + sum(n + 1);
}

int product(int n)
{
  if(n == 1)
    return 1;

  if(n > 1)
    return n * product(n - 1);

  return n * product(n + 1);
}
