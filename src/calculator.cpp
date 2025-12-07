#include <iostream>
using namespace std;

int main()
{
  string input_number;
  int sum = 0;

  cout << "(Press enter to get the result)\n";
  while (input_number != "=")
  {
    cout << "Enter your Number: ";
    cin >> input_number;
    if (input_number == "=")
    {
      cout << sum;
      break;
    }
    try
    {
      int inp = stoi(input_number);
      sum += inp;
    }
    catch (...)
    {
      cout << "Enter a number!\n";
    }
  }

  return 0;
}