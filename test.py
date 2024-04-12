import dummy

class Person(dummy.Dummy):
    def __init__(self) -> None:
        super().__init__()
        self.name = "Tyler"
        self.occupation = "Programmer"
        self.age = 18 

        print(self.name)
        print(self.age)
        print(self.occupation)

Person()
