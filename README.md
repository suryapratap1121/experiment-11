# experiment-11



Implement-classes-and-objects-in-cpp
AIM
Practice creating a user-defined class in C++ and computing the volume of a cube, comparing member functions defined inside and outside the class and demonstrating the role of access specifiers.

Software used: MinGW compiler, Visual Studio Code, online C++ compiler.

Program 1 User input inside class (userdefinedclass.cpp)
Explanation and theory: This program declares a class named cube with three integer members for dimensions. It includes a function to take input for height, width, and length, a function to calculate volume by multiplying the three dimensions, and a display function to show the result. The approach groups data and related operations within the class to keep logic cohesive.

Algorithm:

Start.
Define class cube with int height, width, length.
Implement inp() to read values from standard input.
Implement volume() to compute height × width × length.
Implement display() to obtain volume and print it.
In main(): create an object, call inp(), then display().
End.
Program 2 Calculate inside class (calcinsideclass.cpp)
Explanation and theory: The class cube initializes the three dimensions with default values and defines a volume() method inside the class to compute the product of the dimensions. In main, an object is created, volume() is called, and the result is printed, illustrating direct access to members from a method defined within the class.

Algorithm:

Start.
Define class cube with public height, width, length initialized to constants.
Define volume() inside the class to return height × width × length.
In main(): create cube instance, call volume(), print “Volume : ”.
End.
Program 3 Compute outside class (calcoutsideclass.cpp)
Explanation and theory: This example defines a cube class with public dimensions, then calculates the volume directly in main using the object’s fields without a member function. It shows that when members are public, client code can read them to compute derived values, though using a method often improves encapsulation.

Algorithm:

Start.
Define class cube with public height, width, length initialized to values.
In main(): instantiate cube.
Compute vol as height × width × length using the object’s fields.
Print the computed volume.
End.
Program 4 Access specifiers and volume (accessspecifier.cpp)
Explanation and theory: The cube class keeps height, width, and length as private members and exposes a public volume() function to return their product. In main, an object calls volume() to get and print the result. This demonstrates data hiding and controlled access to internal state through a public interface.

Algorithm:

Start.
Define class cube with private height, width, length.
Provide public volume() that returns height × width × length.
In main(): create an object, call volume(), print “Volume : ”.
End.
Conclusion
The key class concepts: acquiring input through member functions, computing properties either within the class or externally, and using access specifiers to restrict direct data access. Defining methods inside the class enables straightforward member access, while private data with public functions enforces encapsulation and cleaner interfaces.
