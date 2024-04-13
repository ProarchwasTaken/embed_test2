// dummy.cpp
#include <pybind11/pybind11.h>
#include <string>
#include <iostream>
#include "dummy.h"

using std::string, std::cout;


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

void Dummy::doSomething() {
  cout << "========================\n";
  cout << "Name: " << name << "\n";
  cout << "Age: " << age << "\n";
  cout << "Occupation: " << occupation << "\n";
  cout << "========================\n";
}

void PyDummy::doSomething() {
  PYBIND11_OVERRIDE(void, Dummy, doSomething);
}

