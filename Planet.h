#ifndef Planet_H
#define Planet_H

class Planet {
	char name[20];
	char distance[20];
	char size_planet[20];
	char time_rotation[20];
	char temperature[20];
	char radius[20];
public:
	Planet();

	void Vivod_in_not_fail();
	void Vivod_in_fail();
	~Planet();
};

#endif Planet_H