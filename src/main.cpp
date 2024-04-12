// main.cpp
#include <pybind11/embed.h>
#include <pybind11/eval.h>
#include <pybind11/pybind11.h>
#include "python_script.h"

namespace py = pybind11;


int main() {
  py::scoped_interpreter guard{};

  PythonScript script("test.py");
  py::exec(script);

  return 0;
}
