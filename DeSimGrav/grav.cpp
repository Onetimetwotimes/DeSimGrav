#include <iostream>
#include <vector>
#include "particle.h"

int main() {
	int dim = 2;
	Particle p = Particle(dim);
	std::vector<double> v = std::vector<double>(dim);
	v.at(0) = 1.0;
	v.at(1) = 2.0;
	p.setVelocity(v);
	for (int i = 0; i < dim; i++)
		std::cout << p.getVelocity().at(i) << std::endl;
}