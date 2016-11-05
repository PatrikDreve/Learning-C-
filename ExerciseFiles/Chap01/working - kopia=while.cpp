// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main( int argc, char ** argv )
{
	int a[] = { 1, 2, 3, 4, 5 };
	int i = 0;
	while (i < 5) {
		printf("Element %d is %d\n", i, a[i]);
		++i;
	}

    return 0;
}
