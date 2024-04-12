import dummy

class Person(dummy.Dummy):
    def __init__(self) -> None:
        super().__init__()
        self.name = "Tyler"

        print(self.name)

Person()
