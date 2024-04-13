"""=======================================================================
This script is not meant to be ran directly in the conventional way. If
you try to, an ModuleNotFoundError will be raised. This script is meant to
be ran using the interpreter embedded into the program executable.

When the executable is ran, this file would be read and executed. Then,
the program initializes an instance of Person and calls it's 'doSomething'
method.
==========================================================================
The Dummy class is actually from a module embedded into the executable
itself. This is why you can't run the script normally. Theoretically, you
probably wouldn't need to have python installed on your system as the 
program executable already has the interpreter embedded to it, but don't
quote me on that.

The Dummy class itself is actually written in C++ and exposed to python.
After the program executes the script, and creates an instance of Person,
the instance will be casted as a pointer to the original C++ class. Of
course, any modifications would still be intact. I think the reason for 
this is that the pointer just points to the address of the Person instance
rather than just converting it to it's C++ class counterpart which I
figured would be much more complicated. I guess it worked more like
'reinterpret_cast<>'
==========================================================================
To support modifiable behavior. The Person class must inherit from Dummy.
The class must also be named: 'Person' as the program is hard-coded to
attempt to create an instance of it.

Other than those limitations, you can pretty much modify the class as much
as you want. As long as you don't do anything stupid, the code should 
execute just fine when the program is ran.

You can change the classes default properties, change what happens when 
the doSomething method is called, and more. Although the class is mostly
written in C++, and you can't really add anything to the compiled code
itself, you can define pure python variables, methods, and properties.
======================================================================="""
from dummy import Dummy


class Person(Dummy):
    def __init__(self) -> None:
        """It should be already obvious on what this does if you had any
        experience in python. The super() function must be on the first
        line. Otherwise, there would be problems."""
        super().__init__()
        self.name = "Tyler"
        self.occupation = "Programmer"
        self.age = 18 

        # A pure python variable.
        self.known_languages: int = 2

    def doSomething(self) -> None:
        """Is called at least once when the executable is ran. What 
        happens when the function is called can be changed however you 
        want."""
        super().doSomething()
        self.blurb()

    def blurb(self) -> None:
        """A method written to show that pure python methods and variables
        do work."""
        print(f"Knows {self.known_languages} programming languages.")

