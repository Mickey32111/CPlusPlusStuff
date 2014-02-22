#include <iostream>
using namespace std ;

int main()
{
	int a = 1 , b = 0 ;
	cout << "a = true  |  b = false" << endl << endl ;
	
	cout << "AND logic:" << endl ;
	cout << "(a && a): " << ( a && a ) << " (true) " << endl ; 
	cout << "(a && b): " << ( a && b ) << " (false) " << endl ;
	cout << "(b && b): " << ( b && b ) << " (false) " << endl << endl ;
	
	cout << "OR logic:" << endl ;
	cout << "(a || a): " << ( a || a ) << " (true) " << endl ;
	cout << "(a || b): " << ( a || b ) << " (true) " << endl ;
	cout << "(b || b): " << ( b || b ) << " (false) " << endl << endl ;
	
	cout << "NOT logic:" << endl ;
	cout << "(!a): " << !a << " (false)" << endl ;
	cout << "(!b): " << !b << " (true)" << endl ;
	

	return 0 ;
}