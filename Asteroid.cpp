#include "Asteroid.h"
#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

Asteroid::Asteroid() {
	cout << "Наименование\n";
	cin >> name;
	cout << "Расстояние от Солнца\n";
	cin >> distance;
	cout << "Размеры\n";
	cin >> size_planet;
	cout << "За сколько суток обращается вокруг Солнца\n";
	cin >> time_rotation;
	cout << "Температура поверхности\n";
	cin >> temperature;
	cout << "Радиус\n";
	cin >> radius;
}

void Asteroid::Vivod_in_not_fail() {
	cout << endl << "Наименование - " << name << endl;
	cout << "Расстояние от Солнца - " << distance << endl;
	cout << "Размеры - " << size_planet << endl;
	cout << "За сколько суток обращается вокруг Солнца - " << time_rotation << endl;
	cout << "Температура поверхности - " << temperature << endl;
	cout << "Радиус - " << radius << endl;
}

void Asteroid::Vivod_in_fail() {
	ofstream file1("Planet.txt", ios_base::app);
	file1 << "++++++++++++++++++++" << endl;
	file1 << "Астероид" << endl;
	file1 << "Наименование - " << name << endl;
	file1 << "Расстояние от Солнца - " << distance << endl;
	file1 << "Размеры - " << size_planet << endl;
	file1 << "За сколько суток обращается вокруг Солнца - " << time_rotation << endl;
	file1 << "Температура поверхности - " << temperature << endl;
	file1 << "Радиус - " << radius << endl;
	file1 << "++++++++++++++++++++" << endl;
	file1 << "\n\n";
	file1.close();
}
Asteroid::~Asteroid() {}