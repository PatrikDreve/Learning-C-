// func.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <string>
using namespace std;

const string & func(){

	static string s = "This is a static string";
	return s;
}

int main( int argc, char ** argv ) {
    puts("this is main()");
	printf("The returned value from func is: %s", func().c_str());
    return 0;
}

