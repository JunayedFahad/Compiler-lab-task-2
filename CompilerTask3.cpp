#include<iostream>
using namespace std ;
bool is_single_line_comment(const string & line ){
return line.find("//") == 0 ;
}
bool is_multi_line_comment(const string& line) {
  return line.find("/*") == 0 && line.find("*/");
}


int main() {
  string input;
  cout << "Enter a line: ";
  getline(cin, input);

  if (is_single_line_comment(input)) {
    cout << input << " is a single line comment." << endl;
  }
   else if(is_multi_line_comment(input))
    {
    cout << input << " is multi line comment." << endl;
  }
 else
  {

      cout << "not a comment" ;
  }

  return 0;
}



