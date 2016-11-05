// working.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
using namespace std;

int main( int argc, char ** argv )
{
	int x = 10;
	int &y = x;

	y = 30;
	cout << "x is: " << x << endl;
	cout << "y is: " << y << endl;

	return 0;
}
