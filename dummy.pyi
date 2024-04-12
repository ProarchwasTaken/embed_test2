class Dummy:
    def __init__(self) -> None: 
        ...

    @property
    def name(self) -> str:
        ...

    @name.setter
    def name(self, name: str):
        ...

