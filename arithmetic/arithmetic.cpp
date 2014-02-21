#include <iostream>
using namespace std ; 

int main()
{
	int a = 8 , b = 4 ;
	cout << "a = 8 | b = 4" << endl ;
	cout << endl ;
	cout << "Addition result: " << ( a + b ) << endl ;
	cout << "Subtraction result: " << ( a - b ) << endl ;
	cout << "Multiplication result: " << ( a * b ) << endl ;
	cout << "Division result: " << ( a / b ) << endl ;
	cout << "Modulus result: " << ( a % b ) << endl ;
	cout << endl ;
	
	cout << "Increment (a): " << a++ << endl ;
	cout << "Decrement (a): " << a-- << endl ;
	cout << endl ;
	
	cout << "Increment (b): " << b++ << endl ;
	cout << "Decrement (b): " << b-- << endl ;
		
	return 0 ;
}