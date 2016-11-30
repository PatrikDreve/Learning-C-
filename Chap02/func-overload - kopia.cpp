// Function overload copy, by Patrik Drevestedt
// for education purposes, only

#include <cstdio>

using namespace std;

// volume of a cube
double volume(double a) {
	printf("Cube of %.3lf\n", a);
	return a * a * a;
}

// volume of a cylinder
double volume(double r, double h) {
	const static double _pi = 3.141;
	printf("Cylinder of %.3lf x %.3lf\n", r, h);
	return _pi * r * r * h;
}

// volume of a cuboid
double volume(double a, double b, double c) {
	printf("Cuboid of %.3lf x %.3lf x %.3lf\n", a, b, c);
	return a * b * c;
}

int main(int argc, char ** argv) {
	printf("Volume of a 2 x 2 x 2 cube is: %.3lf\n", volume(2.0));
	printf("Volume of a radius 2, height 2 cylinder is: %.3lf\n", volume(2.0, 2.0));
	printf("Volume of a 2 x 3 x 4 cuboid is: %.3lf\n", volume(2.0, 3.0, 4.0));
	return 0;
}