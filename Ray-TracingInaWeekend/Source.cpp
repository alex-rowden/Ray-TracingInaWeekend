#include <stdio.h>
#include <iostream>
#include <fstream>
#include "vec3.h"

int main() {
	std::filebuf fb;

	fb.open("ray_traced.ppm", std::ios::out);
	std::ostream file(&fb);
	

	int nx = 200;
	int ny = 100;

	file << "P3" << std::endl;
	file << nx << " " << ny << std::endl;
	file << 255 << std::endl;

	vec3 sample = vec3(1, .5, .3);
	
	for (int j = ny - 1; j >= 0; j--) {
		for (int i = 0; i < nx; i++) {
			vec3 color(float(i) / float(nx), float(j) / float(ny), .2);

			int ir = (int)(color.r() * 255);
			int ig = (int)(color.g() * 255);
			int ib = (int)(color.b() * 255);

			file << ir << " " << ig << " " << ib << std::endl;
		}
	}

	fb.close();

	return 0;
}