// func.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

void func()
{
	int i = 5;
    printf("i = %d\n", i);
}

int main( int argc, char ** argv )
{
    puts("This is main()");
    func();

    return 0;
}

