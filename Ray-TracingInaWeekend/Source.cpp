#include <stdio.h>
#include <iostream>
#include <fstream>

int main() {
	std::filebuf fb;

	fb.open("ray_traced.ppm", std::ios::out);
	std::ostream file(&fb);
	file << "HelloWorld" << std::endl;

	fb.close();

	return 0;
}