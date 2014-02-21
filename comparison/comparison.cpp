#include <iostream>
using namespace std ;

int main()
{
	int nil = 0, num = 0, max = 1 ; char cap = 'A', low = 'a' ;
	cout << "Equality comparisons: " ;
	cout << "(0 == 0) " << ( nil == num ) << "(true)" << endl ;
	cout << "(A == a) " << ( cap == low ) << "(false)" ;
	
	cout << endl << "Inequality comparison: " << endl ;
	cout << "(0 != 1) " << ( nil != max ) << "(true)" << endl ;
	
	cout << endl << "Greater comparison: " << endl ;
	cout << "(0 > 1) " << ( nil > max ) << "(false)" << endl ;
	
	cout << endl << "Lesser comparison: " << endl ;
	cout << "(0 < 1) " << ( nil < max ) << "(true)" << endl ;
	
	return 0 ;
}
