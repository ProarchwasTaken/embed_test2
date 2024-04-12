// python_script.h
#pragma once
#include <string>


class PythonScript : public std::string {
public:
  PythonScript(std::string file_name);
  void loadScript(std::string file_name);
};
