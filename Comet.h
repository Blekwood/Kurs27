#ifndef Comet_H
#define Comet_H

class Comet {
	char name[20];
	char distance[20];
	char size_planet[20];
	char time_rotation[20];
	char temperature[20];
	char radius[20];
public:
	Comet();

	void Vivod_in_not_fail();
	void Vivod_in_fail();
	~Comet();
};

#endif Comet_H