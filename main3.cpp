#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

void calc(double arg1, double arg2, char op)
{
  if (op == '+')
  {
    double result = arg1 + arg2;
    cout << arg1 << " + " << arg2 << " = " << result << "\n";
  }

  if (op == '-'){
    double result = arg1 - arg2;
    cout << arg1 << " - " << arg2 << " = " << result << "\n";
  }

  if (op == '*'){
    double result = arg1 * arg2;
    cout << arg1 << " * " << arg2 << " = " << result << "\n";
  }

  if (op == '/'){
    double result = arg1 / arg2;
    cout << arg1 << " / " << arg2 << " = " << result << "\n";
  }
}

int main3()
{
  double arg1;
  double arg2;
  char op;

  cout << "What Operator Do You Want To Use?: ";
  cout << "+ - * /: ";
  cin  >> op;
  cout << "You Chose " << op << "\n";

  cout << "Enter arg1: ";
  cin >> arg1;

  cout << "Enter arg2: ";
  cin >> arg2;

  calc(arg1, arg2, op);
}