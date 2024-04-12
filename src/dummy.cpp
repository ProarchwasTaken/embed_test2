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

