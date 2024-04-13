"""A Python Interface file for the dummy module which is a module that's
embedded into the program executable itself. It's mainly there to let the
type checker know that the class and it's attributes exist. It could also
be used as a reference for the end-user to what properties and methods the
class has."""

class Dummy:
    """The Dummy base class as a whole is quite simple for what I'm trying 
    to do. It has properties relating to the instance's name, age, and
    occupation. There is a method that by default, will print all that 
    information to the console, and it's overridable."""
    def __init__(self) -> None: 
        ...

    @property
    def name(self) -> str:
        ...

    @name.setter
    def name(self, name: str):
        ...

    @property
    def occupation(self) -> str:
        ...

    @occupation.setter
    def occupation(self, occupation: str):
        ...

    @property
    def age(self) -> int:
        ...

    @age.setter
    def age(self, value: int):
        ...

    def doSomething(self) -> None:
        ...

