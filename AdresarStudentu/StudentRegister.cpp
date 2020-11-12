#include <string>
#include <stdio.h>
#include "StudentRegister.h";

void StudentRegister::add(Student student) {
	Students.push_back(student);
}
void StudentRegister::remove(int index) {
	Students.erase(Students.begin() + index);
}