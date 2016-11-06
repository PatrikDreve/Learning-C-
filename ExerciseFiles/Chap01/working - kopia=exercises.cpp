// Exercises by Patrik Drevestedt

#include <iostream>

using namespace std;

	int main(void) {

		int a[] = { 1, 2, 3, 4, 5 };
		for (int * cp = a; *cp; cp++) {
			cout << "character pointer is: " << *cp << endl;
		}

	return(0);

}