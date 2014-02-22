#include <iostream>
using namespace std ;

int main()
{
	int num = 8 ;
	char letter = 'A' ;
	
	cout << "Number equals 8" << endl ;
	cout << "Letter equals A" << endl << endl ;

	if ( num > 5 )
		{ cout << "Number more than five" << endl ; }
	else
		{ cout << "Number is five or less" << endl ; }
		
	if ( letter == 'A' ) 
		{ cout << "Letter is A" << endl ; }
	else
		{ cout << "Letter is not A" << endl ; }
		
	return 0 ;
}