// dummy.h
#pragma once
#include <string>


/* I don't know why, but I always resorted to using this kind of class
 * when testing something. Stores basic infomation about a person. Meant
 * to be exposed to python to be used as a base class.*/
class Dummy {
  std::string name;
  std::string occupation;
  int age;

public:
  Dummy();
  
  std::string getName();
  void setName(std::string name);

  std::string getOccupation();
  void setOccupation(std::string occupation);

  int getAge();
  void setAge(int value);

  /* By default, it would print the instance's properties to the console.
   * It can be overridden in python, and that's thanks to the PyDummy
   * helper class.*/
  virtual void doSomething();
};


/* According to the pybind11 documentation to make the member functions 
 * like "doSomething" to be able to be overridden and modified in python,
 * a helper class and trampoline must be defined. I'm guessing that a 
 * trampoline is something like redirects virtual calls back to python.*/
class PyDummy : public Dummy {
public:
  using Dummy::Dummy;

  void doSomething() override;
};
