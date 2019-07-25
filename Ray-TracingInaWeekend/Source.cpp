#include <stdio.h>
#include <iostream>
#include <fstream>

int main() {
	std::filebuf fb;

	fb.open("ray_traced.ppm", std::ios::out);
	std::ostream file(&fb);
	

	int nx = 200;
	int ny = 100;

	file << "P3" << std::endl;
	file << nx << " " << ny << std::endl;
	file << 255 << std::endl;

	for (int j = ny - 1; j >= 0; j--) {
		for (int i = 0; i < nx; i++) {
			float r = (float)i / (float)nx;
			float g = (float)j / (float)ny;
			float b = .2;

			int ir = (int)(r * 255);
			int ig = (int)(g * 255);
			int ib = (int)(b * 255);

			file << ir << " " << ig << " " << ib << std::endl;
		}
	}

	fb.close();

	return 0;
}