//Jump List Copy by Patrik Drevestedt
//i övningssyfte (for education purpose)

#include <cstdio>

using namespace std;

const char * prompt();
int jump(const char *);

void fa() { puts("This is function fa()"); }
void fb() { puts("This is function fb()"); }
void fc() { puts("This is function fc()"); }
void fd() { puts("This is function fd()"); }
void fe() { puts("This is function fe()"); }

void(*funcs[])() = { fa, fb, fc, fd, fe, nullptr };

int main(int argc, char ** argv) {

	while (jump(prompt()));
	puts("\nDone");
	return 0;
}

const char * prompt() {
	puts("Choose an option:");
	puts("1. Function fa()");
	puts("2. Function fb()");
	puts("3. Function fc()");
	puts("4. Function fd()");
	puts("5. Function fe()");
	puts("Q. Quit");
	printf(">> ");

	fflush(stdout);						// flushes after prompt
	const int buffersz = 16;			// constant for buffersize
	static char response[buffersz];		// static storage for response buffer
	fgets(response, buffersz, stdin);	// gets response from console (keyboard)

	return response;
}

int jump(const char * rs) {
	char code = rs[0];
	if (code == 'q' || code == 'Q') return 0;

	// count the length of the funcs array
	int funcLength = 0;
	while (funcs[funcLength] != NULL) funcLength++;

	int i = (int)code - '0';	// convert ASCII numeral to int
	i--;	//list is zero based
		if (i < 0 || i >= funcLength) {
			puts("Invalid choice");
			return 1;
		}
		else {
			funcs[i]();
			return 1;
		}
}