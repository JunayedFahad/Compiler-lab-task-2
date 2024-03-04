#include <iostream>
using namespace std;

bool is_numeric(const string& str)
{

  if (str.empty())
    {
    return false;
    }


  int i = 0;
  if (str[i] == '-' || str[i] == '+') {
    i++;

  }


  bool is_digit = false;
  while (i < str.length()) {
    if (isdigit(str[i])) {
      is_digit = true;
    } else if (str[i] == '.') {

      if (is_digit && i < str.length() - 1 && isdigit(str[i + 1])) {
        i++;
      } else {
        return false;
      }
    } else {
      return false;
    }
    i++;
  }

  return is_digit;
}

int main() {
  string input;
  cout << "Enter a string: ";
  getline(cin, input);

  if (is_numeric(input)) {
    cout << input << " is a numeric constant." << endl;
  } else {
    cout << input << " is not a numeric constant." << endl;
  }

  return 0;
}
