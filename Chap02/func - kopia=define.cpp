// func.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <string>
using namespace std;

void func( const string & fs) {
	printf("Value of fs is %s\n", fs.c_str());
}

int main(int argc, char ** argv)
{
	string s = "Hello, I'm a string";

	puts("This is main");
	func(s);
	printf("String s is %s\n", s.c_str());

	return(0);
}
