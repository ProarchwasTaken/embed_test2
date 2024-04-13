// python_script.cpp
#include <iostream>
#include <string>
#include <fstream>
#include "python_script.h"

using std::string, std::ifstream, std::cout, std::getline;


PythonScript::PythonScript(string file_name) : string() {
  loadScript(file_name);
}

void PythonScript::loadScript(string file_name) {
  cout << "Attempting to open: " << file_name << "\n";
  ifstream file(file_name);
  string current_line;

  cout << "Appending and formatting each line...\n";
  while (getline(file, current_line)) {
    this->append(current_line + "\n");
  }

  cout << "Script successfully loaded!\n";
  file.close();
}
