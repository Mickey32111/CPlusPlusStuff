#include <iostream>
using namespace std ; 

int main()
{
int a, b, max ;
a = 1, b = 2 ;
cout << "a = 1  |  b = 2" << endl << endl ;

cout << "Variable <a>: " ;
cout << (( a != 1 ) ? "does not equal one, " : "does equal one, " ) ;
cout << (( a & 2 != 0 ) ? "and is odd." : "and is even." ) ;

cout << endl << "Variable <b>: " ;
cout << (( b != 1 ) ? "does not equal one, " : "does equal one, " ) ;
cout << (( b & 2 != 0 ) ? "and is odd." : "and is even." ) ;

max = ( a > b ) ? a : b ;
cout << endl << "Greater value is: " << max << endl ; 

return 0 ;
}