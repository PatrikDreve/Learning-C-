// Exercises by Patrik Drevestedt

#include <iostream>

using namespace std;

	int main(void) {

		char a[] = { 's', 't', 'r', 'i', 'n', 'g' };
		int counter = 0;
		
		while (counter < 6) {
			cout << "counter is in box " << counter << " in the array, which has the value of: " << a[counter] << endl;
			counter++;
		}

	return(0);

}