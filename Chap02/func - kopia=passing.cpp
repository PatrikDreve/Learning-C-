// func.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

void func()
{
	static int i = 5;
    printf("i = %d\n", i);
	i = 10;
	printf("i = %d\n", i);
	i++;
}

int main( int argc, char ** argv )
{
    puts("this is main()");
    func();
	func();

    return 0;
}

