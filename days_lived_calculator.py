class Person:

    def __init__(self, name: str, age_in_years: int):
        self.name = name
        self.age_in_years = age_in_years

    def get_age_in_days(self) -> int:
        return self.age_in_years * 365


def main():
    axel = Person(name="Axel", age_in_years= 38)
    axel_age_in_days = axel.get_age_in_days()
    print(axel_age_in_days)
    
if __name__ == "__main__":
    main()

