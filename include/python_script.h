// python_script.h
#pragma once
#include <string>


/* Stores the contents of a python script. Needs the file path to the 
 * script on construction. This is class pretty much derives from string
 * as I wanted to try something new, and see if it worked.*/
class PythonScript : public std::string {
public:
  PythonScript(std::string file_name);

  /* For opening the script itself, and storing it's contents, formated 
   * and executable. Is called on instance initialization.*/
  void loadScript(std::string file_name);
};
