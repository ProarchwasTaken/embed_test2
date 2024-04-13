// dummy.h
#pragma once
#include <string>


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

  virtual void doSomething();
};


class PyDummy : public Dummy {
public:
  using Dummy::Dummy;

  void doSomething() override;
};
