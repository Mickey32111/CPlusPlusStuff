#include <iostream>
#include <vector>
using namespace std ;

int main()
{
	vector <int> vec( 10 ) ;
	int i = 0 ;
	
	while ( i < vec.size() )
	{
		i++ ;
		vec[ i-1 ] = i ;
		if ( i == 3 ) { cout << " | Skipped" << endl ; continue ; }
		if ( i == 8 ) { cout << endl << "Done" ; break ; }
		cout << " | " << vec.at( i-1 ) << endl ;
	}
	
	return 0 ;
}