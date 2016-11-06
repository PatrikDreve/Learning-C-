// by Patrik Drevestedt

#include <iostream>

using namespace std;

int main(void) {

	//int a[] = { 1, 2, 3, 4, 5 };

	char s[] = "string";

	for ( char c : s) {
		if (c == 0) break;
		cout << "c is: " << c << endl;
	}

	return(0);
}