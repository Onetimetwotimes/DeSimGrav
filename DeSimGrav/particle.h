#pragma once

#include <vector>

class Particle {
private:
	int dimension;
	double mass;
	std::vector<double> position;
	std::vector<double> velocity;
	std::vector<double> acceleration;
public:
	Particle(int pDimension) : Particle(pDimension, 0.0) {};
	Particle(int pDimension, double pMass);
	int getDimension();
	void setPosition(std::vector<double> p);
	std::vector<double> getPosition();
	void setVelocity(std::vector<double> v);
	std::vector<double> getVelocity();
	void setAcceleration(std::vector<double> a);
	std::vector<double> getAcceleration();
	void setMass(double m);
	double getMass();
};