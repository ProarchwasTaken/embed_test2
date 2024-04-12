// dummy.cpp
#include <string>
#include "dummy.h"

using std::string;


Dummy::Dummy() {
  name = "None";
  occupation = "N/A";
  age = 0;
}

string Dummy::getName() {
  return name;
}

void Dummy::setName(string name) {
  this->name = name;
}

string Dummy::getOccupation() {
  return occupation;
}

void Dummy::setOccupation(string occupation) {
  this->occupation = occupation;
}

int Dummy::getAge() {
  return age;
}

void Dummy::setAge(int value) {
  age = value;
}

