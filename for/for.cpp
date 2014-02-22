#include <iostream>
using namespace std ;

int main()
{
	int i, j ;
	for ( i = 1 ; i < 4 ; i++ )
	{
		cout << "Loop: " << i << endl ;
		for ( j = 1 ; j < 4 ; j++ )
		{
		cout << "	Inner Loop: " << j << endl ;
		}
	}


	return 0 ;
}