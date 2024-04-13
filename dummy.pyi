class Dummy:
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

