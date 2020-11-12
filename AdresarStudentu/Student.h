#pragma once
#include <string>
#include "Adress.h"
#include "vector"

class Student {
public:
	Student(std::string name, std::string surname) {
		Name = name;
		Surname = surname; 
	}
	std::string Name;
	std::string Surname;
	std::vector<Adress> Adresses;
	void addAdress(Adress);
};