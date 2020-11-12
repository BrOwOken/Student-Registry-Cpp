#pragma once
#include <string>
#include "Student.h"
#include <vector>

class StudentRegister {
private:
	Student get_index(int);
public:
	std::vector<Student> Students;
	void add(Student);
	void remove(int);
};