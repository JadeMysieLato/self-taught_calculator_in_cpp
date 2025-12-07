#include <iostream>
using namespace std;

float calculator(char operation);

int main()
{
  float result = 0;
  char operation;

  do
  {
    cout << "[+] Add Numbers\n";
    cout << "[-] Subtract Numbers\n";
    cout << "[*] Multiply Numbers\n";
    cout << "[/] Divide Numbers\n";
    cout << "[x] Exit\n";
    cout << "What are you going to do?: ";
    cin >> operation;

    switch (tolower(operation))
    {
    case 'x':
      cout << "\nThank you for using Mysie's Caluclator!";
      break;
    case '+':
    case '-':
    case '*':
    case '/':
      result = calculator(operation);
      cout << "\nResult: " << result << "\n\n";
      break;
    default:
      cout << "Input a valid operator!";
    }
  } while (operation != 'x');

  return 0;
}

float calculator(char operation)
{
  string number_input;
  float result = 0;

  cout << "[=] Is equal to\n";
  while (number_input != "=")
  {
    cin >> number_input;
    if (number_input == "=")
    {
      return result;
    }

    switch (operation)
    {
    case '+':
      try
      {
        float number = stoi(number_input);
        result += number;
      }
      catch (...)
      {
        cout << "Invalid number!\n";
      }
      break;

    case '-':
      try
      {
        float number = stoi(number_input);
        result -= number;
      }
      catch (...)
      {
        cout << "Invalid number!\n";
      }
      break;

    case '*':
      try
      {
        float number = stoi(number_input);
        result *= number;
      }
      catch (...)
      {
        cout << "Invalid number!\n";
      }
      break;

    case '/':
      try
      {
        float number = stoi(number_input);
        result /= number;
      }
      catch (...)
      {
        cout << "Invalid number!\n";
      }
      break;
    }
  }

  return 0;
}