#include <iostream>
using namespace std ;

int main()
{
	int num = 3 ;
	cout << "Day 3" << endl << endl ;

	switch ( num )
	{
		case 1 : cout << num << " : Monday" ; break ;
		case 2 : cout << num << " : Tuesday" ; break ;
		case 3 : cout << num << " : Wednesday" ; break ;
		case 4 : cout << num << " : Thursday" ; break ;
		case 5 : cout << num << " : Friday" ; break ;
		default : cout << num << " : Weekend" ; break ;
	}
	
	return 0 ;
}