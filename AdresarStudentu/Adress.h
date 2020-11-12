#pragma once
#include <string>
#include "AdressType.h"

class Adress {
private:
public:
	Adress(std::string country, std::string city, std::string street, std::string houseNumber, int postNumber, std::string description, AdressType type) {
		Country = country;
		City = city;
		Street = street;
		HouseNumber = houseNumber;
		PostNumber = postNumber;
		Description = description;
		Type = type;
	};
	std::string Country;
	std::string City;
	std::string Street;
	std::string HouseNumber;
	int PostNumber;
	std::string Description;
	AdressType Type;
};