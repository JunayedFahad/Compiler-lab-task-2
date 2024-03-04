#include<iostream>
using namespace std ;

bool is_arithmetic_operator(char symbol)
{
    return symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' || symbol == '%' || symbol == '='  ;
}

int main ()
{

    string input ;
    cout << "Enter a Symbol : " ;
    getline(cin ,input);
    if (input.length() == 1 && is_arithmetic_operator(input[0]))
    {
        cout <<input[0]<<" is an arithmetic operator "<<endl ;

    }
     else
            {
                cout <<input[0]<<" is not an arithmetic operator "<<endl ;

        }
    return 0;
}

