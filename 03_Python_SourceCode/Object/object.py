class Dog:
    species = "Canine"  

    def __init__(self, name, age):
        self.name = name  
        self.age = age  

# Creating an object of the Dog class
dog1 = Dog("Buddy", 3)

print(dog1.name)  
print(dog1.species)