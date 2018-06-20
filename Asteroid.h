#ifndef Asteroid_H
#define Asteroid_H

class Asteroid {
	char name[20];
	char distance[20];
	char size_planet[20];
	char time_rotation[20];
	char temperature[20];
	char radius[20];
public:
	Asteroid();

	void Vivod_in_not_fail();
	void Vivod_in_fail();
	~Asteroid();
};

#endif Asteroid_H