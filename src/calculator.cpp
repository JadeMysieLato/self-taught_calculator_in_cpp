#include <iostream>
using namespace std;

int main()
{
  string input_number;
  cout << "(Press enter to get the result)\n";
  while (input_number != "=")
  {
    cout << "Enter your Number: ";
    cin >> input_number;
    if (input_number == "=")
    {
      cout << input_number;
      break;
    }
    else if (input_number == "1" || input_number == "2" || input_number == "3" || input_number == "4" || input_number == "5" || input_number == "6" || input_number == "7" || input_number == "8" || input_number == "9" || input_number == "0")
    {
      stoi(input_number);
      input_number += input_number;
    }
    else
    {
      cout << "Enter a number!\n";
    }
  }
  return 0;
}