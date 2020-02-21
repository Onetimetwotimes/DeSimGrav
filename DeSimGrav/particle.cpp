#include <vector>
#include <string>
#include <stdexcept>

#include "particle.h"

Particle::Particle(int pDimension, double pMass) {
	dimension = pDimension;

	position = std::vector<double>(dimension);
	velocity = std::vector<double>(dimension);
	acceleration = std::vector<double>(dimension);
	for (int i = 0; i < dimension; i++) {
		position.at(i) = 0.0;
		velocity.at(i) = 0.0;
		acceleration.at(i) = 0.0;
	}
}

int Particle::getDimension() {
	return dimension;
}

void Particle::setMass(double m) {
	if (m < 0) {
		throw std::invalid_argument("Mass cannot be negative, received " + std::to_string(m));
	}
	mass = m;
}

double Particle::getMass() {
	return mass;
}

void Particle::setPosition(std::vector<double> p) {
	if (p.size() > position.size()) {
		throw std::invalid_argument("Incompatible Dimension");
	}
	for (int i = 0; i < p.size(); i++) {
		position.at(i) = p.at(i);
	}
}

std::vector<double> Particle::getPosition() {
	return std::vector<double>(position);
}

void Particle::setVelocity(std::vector<double> v) {
	if (v.size() > velocity.size()) {
		throw std::invalid_argument("Incompatible Dimension");
	}
	for (int i = 0; i < v.size(); i++) {
		velocity.at(i) = v.at(i);
	}
}

std::vector<double> Particle::getVelocity() {
	return std::vector<double>(velocity);
}

void Particle::setAcceleration(std::vector<double> a) {
	if (a.size() > acceleration.size()) {
		throw std::invalid_argument("Incompatible Dimension");
	}
	for (int i = 0; i < a.size(); i++) {
		acceleration.at(i) = a.at(i);
	}
}

std::vector<double> Particle::getAcceleration() {
	return std::vector<double>(acceleration);
}