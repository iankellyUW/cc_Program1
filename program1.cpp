//   program1.cpp
//   Ian Kelly
//   COSC 4785  Fall 2021
//   Program  01
//   August 26, 2021
#include<iostream>
#include<iomanip>
#include<string>
#include<FlexLexer.h>

using std::cin;
using std::cout;
using std::string;
using std::endl;

string value;

int main()
{
    FlexLexer *myScanner = new yyFlexLexer;
    int rtn;
    //   any   n e e d e d   i n i t i a l i z a t i o n   c o d e

    while((rtn=myScanner->yylex()) != 0) {
        //   l o o p   c o d e   g o e s   h e r e
        cout << myScanner->lineno() << "  " << std::setw(3) << value ;
        cout << myScanner->YYText() << endl;
        cout << myScanner->YYLeng() << endl;
    }
    // more   c o d e   i f   n e e d e d
    return 0;
}