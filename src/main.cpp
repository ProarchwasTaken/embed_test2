// main.cpp
#include <iostream>
#include <pybind11/embed.h>
#include <pybind11/eval.h>
#include <pybind11/pybind11.h>
#include "python_script.h"
#include "dummy.h"

namespace py = pybind11;


PYBIND11_EMBEDDED_MODULE(dummy, m) {
  py::class_<Dummy, PyDummy>(m, "Dummy")
    .def(py::init<>())
    .def("doSomething", &Dummy::doSomething)
    .def_property("name", &Dummy::getName, &Dummy::setName)
    .def_property("occupation", &Dummy::getOccupation, 
                  &Dummy::setOccupation)
    .def_property("age", &Dummy::getAge, &Dummy::setAge);
}


int main() {
  py::scoped_interpreter guard{};

  PythonScript script("script.py");
  py::exec(script); 
  
  py::object obj = py::eval("Person()");

  Dummy *person = obj.cast<Dummy *>();
  person->doSomething();

  std::cout << "\n<Press Enter to exit>";
  std::cin.ignore();
  return 0;
}
