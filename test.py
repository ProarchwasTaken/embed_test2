from dummy import Dummy

class Person(Dummy):
    def __init__(self) -> None:
        super().__init__()
        self.name = "Tyler"
        self.occupation = "Programmer"
        self.age = 18 

