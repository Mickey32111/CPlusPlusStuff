#include <iostream>
using namespace std ;

int main()
{
	const double PI = 3.141592653589793238463 ;
	cout << "The circumference of a 6 inch circle: " << (PI * 6) << endl ;
	
	enum
	{ RED=1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK } ;
	cout << "Red Score: " << RED << endl ;
	cout << "Blue Score: " << BLUE << endl ;
	cout << "Total Score: " << (RED + BLUE) << endl ;
	
	typedef enum { NEGATIVE , POSITIVE } charge ;
	charge neutral = NEGATIVE , live = POSITIVE ;
	cout << "Neutral: " << neutral << endl ;
	cout << "Live: " << live << endl ;
	
	return 0 ;
}