#include <iostream>
using namespace std;

void fail();

void inheritance()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Theory. \n";
        cout << "2. Source Code. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 2 || cin.fail())
        {
            fail();
            continue;
        }

        // Theory
        if (option == 1)
        {
            cout << R"(-->Inheritance in C++:

Inheritance is a fundamental concept of Object-Oriented Programming (OOP) that allows a class to inherit properties and behaviors from another class. 
The class that is being inherited from is called the base class or parent class, and the class that inherits from it is called the derived class or child class.
The derived class can access the non-private members (public and protected) of the base class. This enables code reusability and the creation of a hierarchical relationship among classes.

--> Syntax of inheritance:

class BaseClass
{
    // Base class members
};

class DerivedClass : accessSpecifier BaseClass
{
    // Derived class members
};

--> Access Specifiers:

1. public: The public members of the base class are accessible in the derived class with the same access level.
2. protected: The protected members of the base class are accessible in the derived class but not accessible outside the class.
3. private: The private members of the base class are not accessible in the derived class.

--> Types of Inheritance:

1. Single Inheritance: A derived class inherits from a single base class.
2. Multiple Inheritance: A derived class inherits from multiple base classes.
3. Multilevel Inheritance: A derived class becomes the base class for another class.
4. Hierarchical Inheritance: Multiple derived classes inherit from the same base class.
5. Hybrid Inheritance: A combination of multiple and multilevel inheritance.

--> Example of Single Inheritance:

class Shape
{
protected:
    int width;
    int height;

public:
    void setDimensions(int w, int h)
    {
        width = w;
        height = h;
    }
};

class Rectangle : public Shape
{
public:
    int getArea()
    {
        return width * height;
    }
};

int main()
{
    Rectangle rect;
    rect.setDimensions(5, 10);
    cout << "Area of the rectangle: " << rect.getArea() << endl;

    return 0;
}

In this example, the class 'Rectangle' inherits publicly from the class 'Shape', and it can access the 'width' and 'height' members of the base class.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(Example - Inheritance in C++:

#include <iostream>
using namespace std;

// Base class
class Shape
{
protected:
    int width;
    int height;

public:
    void setDimensions(int w, int h)
    {
        width = w;
        height = h;
    }
};

// Derived class inheriting from Shape
class Rectangle : public Shape
{
public:
    int getArea()
    {
        return width * height;
    }
};

int main()
{
    Rectangle rect;
    rect.setDimensions(5, 10);
    cout << "Area of the rectangle: " << rect.getArea() << endl;

    return 0;
}
)";
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            system("clear");

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void inheritanceAccessControl()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Theory. \n";
        cout << "2. Source Code. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 2 || cin.fail())
        {
            fail();
            continue;
        }

        // Theory
        if (option == 1)
        {
            cout << R"(--> Inheritance Access Control in C++:

When we inherit a class in C++, we can specify the access control of the base class members that are inherited in the derived class. 
The access control defines how the inherited members can be accessed in the derived class and outside the class.

--> The three access specifiers in C++ are:

1. public: The public members of the base class become public members of the derived class. They can be accessed directly by the objects of the derived class and outside the class.
2. protected: The protected members of the base class become protected members of the derived class. They are not accessible outside the class but can be accessed by member functions of the derived class.
3. private: The private members of the base class become private members of the derived class. They are not accessible outside the class and cannot be accessed by member functions of the derived class.

--> Example of Inheritance Access Control:

class Base
{
public:
    int publicVar;
    void publicFunc()
    {
        cout << "Public Function" << endl;
    }

protected:
    int protectedVar;
    void protectedFunc()
    {
        cout << "Protected Function" << endl;
    }

private:
    int privateVar;
    void privateFunc()
    {
        cout << "Private Function" << endl;
    }
};

class Derived : public Base
{
public:
    void accessBaseMembers()
    {
        publicVar = 10; // Accessible
        protectedVar = 20; // Accessible
        // privateVar = 30; // Not accessible
        publicFunc(); // Accessible
        protectedFunc(); // Accessible
        // privateFunc(); // Not accessible
    }
};

int main()
{
    Derived derived;
    derived.accessBaseMembers();

    return 0;
}

In this example, the class 'Derived' inherits publicly from the class 'Base'. The 'publicVar', 'publicFunc()', 'protectedVar', and 'protectedFunc()' are accessible in the 'Derived' class, while the 'privateVar' and 'privateFunc()' are not accessible.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(Example - Inheritance Access Control in C++:

#include <iostream>
using namespace std;

class Base
{
public:
    int publicVar;
    void publicFunc()
    {
        cout << "Public Function" << endl;
    }

protected:
    int protectedVar;
    void protectedFunc()
    {
        cout << "Protected Function" << endl;
    }

private:
    int privateVar;
    void privateFunc()
    {
        cout << "Private Function" << endl;
    }
};

class Derived : public Base
{
public:
    void accessBaseMembers()
    {
        publicVar = 10; // Accessible
        protectedVar = 20; // Accessible
        // privateVar = 30; // Not accessible
        publicFunc(); // Accessible
        protectedFunc(); // Accessible
        // privateFunc(); // Not accessible
    }
};

int main()
{
    Derived derived;
    derived.accessBaseMembers();

    return 0;
}
)";
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            system("clear");

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void functionOverriding()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Theory. \n";
        cout << "2. Source Code. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 2 || cin.fail())
        {
            fail();
            continue;
        }

        // Theory
        if (option == 1)
        {
            cout << R"(--> Function Overriding in C++:

Function Overriding is a feature in C++ where a derived class provides a specific implementation of a function that is already declared in its base class.
When a derived class overrides a base class function, the derived class function is called instead of the base class function when an object of the derived class is used to call the function.

--> Rules for Function Overriding:

1. The function in the base class must be declared as 'virtual'.
2. The function in the derived class must have the same name, return type, and parameters as the function in the base class.
3. The function in the derived class must also be declared as 'virtual', but it is not mandatory.

--> Example of Function Overriding:

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a Shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a Circle" << endl;
    }
};

int main()
{
    Shape* shapePtr = new Circle();
    shapePtr->draw(); // Output: Drawing a Circle

    return 0;
}

In this example, the 'Shape' class has a virtual function 'draw()', which is overridden in the 'Circle' class. 
When we create an object of 'Circle' and call the 'draw()' function using a pointer to the 'Shape' class, the 'draw()' function in the 'Circle' class is executed.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(Example - Function Overriding in C++:

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a Shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a Circle" << endl;
    }
};

int main()
{
    Shape* shapePtr = new Circle();
    shapePtr->draw(); // Output: Drawing a Circle

    return 0;
}
)";
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            system("clear");

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void inheritanceTypes()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Theory. \n";
        cout << "2. Source Code. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 2 || cin.fail())
        {
            fail();
            continue;
        }

        // Theory
        if (option == 1)
        {
            cout << R"(--> Types of Inheritance in C++:

Inheritance is a key feature of object-oriented programming (OOP) that allows a class (derived class) to inherit properties and behavior from another class (base class). C++ supports different types of inheritance:

--> Single Inheritance:
Single inheritance is the simplest form of inheritance, where a derived class inherits from only one base class. It forms a one-to-one inheritance relationship.

-> Example of Single Inheritance:

class Shape
{
public:
    void draw() {}
};

class Circle : public Shape
{
public:
    // Circle inherits from Shape
};

-->  Multiple Inheritance:
Multiple inheritance allows a derived class to inherit from two or more base classes. It forms a one-to-many inheritance relationship.

-> Example of Multiple Inheritance:

class Shape
{
public:
    void draw() {}
};

class Color
{
public:
    void setColor() {}
};

class ColoredShape : public Shape, public Color
{
public:
    // ColoredShape inherits from both Shape and Color
};

-->  Multilevel Inheritance:

Multilevel inheritance is a type of inheritance where a class is derived from another derived class. It forms a hierarchical inheritance relationship.

-> Example of Multilevel Inheritance:

class Shape
{
public:
    void draw() {}
};

class Circle : public Shape
{
public:
    // Circle inherits from Shape
};

class ColoredCircle : public Circle
{
public:
    // ColoredCircle inherits from Circle
};

--> Hierarchical Inheritance:

Hierarchical inheritance is a type of inheritance where two or more classes are derived from a single base class. It forms a one-to-many inheritance relationship.

-> Example of Hierarchical Inheritance:

class Shape
{
public:
    void draw() {}
};

class Circle : public Shape
{
public:
    // Circle inherits from Shape
};

class Square : public Shape
{
public:
    // Square inherits from Shape
};

--> Hybrid Inheritance:

Hybrid inheritance is a combination of two or more types of inheritance. It can be achieved by combining single, multiple, multilevel, or hierarchical inheritance.

Note: The diamond problem can occur in multiple and hybrid inheritance scenarios, which can be resolved using virtual inheritance.

)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(--> Example - Single Inheritance in C++:

#include <iostream>
using namespace std;

class Shape
{
public:
    void draw()
    {
        cout << "Drawing a Shape" << endl;
    }
};

class Circle : public Shape
{
public:
    // Circle inherits from Shape
};

int main()
{
    Circle circle;
    circle.draw(); // Output: Drawing a Shape

    return 0;
}

--> Example - Multiple Inheritance in C++:

#include <iostream>
using namespace std;

class Shape
{
public:
    void draw()
    {
        cout << "Drawing a Shape" << endl;
    }
};

class Color
{
public:
    void setColor()
    {
        cout << "Setting Color" << endl;
    }
};

class ColoredShape : public Shape, public Color
{
public:
    // ColoredShape inherits from both Shape and Color
};

int main()
{
    ColoredShape coloredShape;
    coloredShape.draw();   // Output: Drawing a Shape
    coloredShape.setColor(); // Output: Setting Color

    return 0;
}

--> Example - Multilevel Inheritance in C++:

#include <iostream>
using namespace std;

class Shape
{
public:
    void draw()
    {
        cout << "Drawing a Shape" << endl;
    }
};

class Circle : public Shape
{
public:
    // Circle inherits from Shape
};

class ColoredCircle : public Circle
{
public:
    // ColoredCircle inherits from Circle
};

int main()
{
    ColoredCircle coloredCircle;
    coloredCircle.draw(); // Output: Drawing a Shape

    return 0;
}

--> Example - Hierarchical Inheritance in C++:

#include <iostream>
using namespace std;

class Shape
{
public:
    void draw()
    {
        cout << "Drawing a Shape" << endl;
    }
};

class Circle : public Shape
{
public:
    // Circle inherits from Shape
};

class Square : public Shape
{
public:
    // Square inherits from Shape
};

int main()
{
    Circle circle;
    Square square;
    circle.draw(); // Output: Drawing a Shape
    square.draw(); // Output: Drawing a Shape

    return 0;
}
)";
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            system("clear");

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void friendFunction()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Theory. \n";
        cout << "2. Source Code. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 2 || cin.fail())
        {
            fail();
            continue;
        }

        // Theory
        if (option == 1)
        {
            cout << R"(--> Friend Functions in C++:

A friend function is a function that is not a member of a class, but it has access to the private and protected members of the class. It is declared using the keyword 'friend' inside the class.

--> Features of Friend Functions:

1. Friend functions are not member functions of the class, but they can access private and protected members of the class.

2. Friend functions are declared inside the class but defined outside the class.

3. Friend functions can be regular functions or other class's member functions that are declared as friends.

4. The friend function must be defined separately outside the class body, and the 'friend' keyword must be re-used during the function definition.

--> When to use Friend Functions:

Friend functions are used when you want to allow a function external to the class to access the private data of the class. It is often used to provide access to private data for utility functions or operator overloading.

--> Example of Friend Function:

#include <iostream>
using namespace std;

class MyClass
{
private:
    int privateData;

public:
    MyClass(int data) : privateData(data) {}

    // Declaration of the friend function
    friend void showPrivateData(const MyClass& obj);
};

// Definition of the friend function
void showPrivateData(const MyClass& obj)
{
    cout << "Private data: " << obj.privateData << endl;
}

int main()
{
    MyClass obj(42);
    showPrivateData(obj); // Output: Private data: 42

    return 0;
}
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>
using namespace std;

class MyClass
{
private:
    int privateData;

public:
    MyClass(int data) : privateData(data) {}

    // Declaration of the friend function
    friend void showPrivateData(const MyClass& obj);
};

// Definition of the friend function
void showPrivateData(const MyClass& obj)
{
    cout << "Private data: " << obj.privateData << endl;
}

int main()
{
    MyClass obj(42);
    showPrivateData(obj); // Output: Private data: 42

    return 0;
}
)";
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            system("clear");

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void virtualFunction()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Theory. \n";
        cout << "2. Source Code. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 2 || cin.fail())
        {
            fail();
            continue;
        }

        // Theory
        if (option == 1)
        {
            cout << R"(--> Virtual Functions in C++:

A virtual function is a member function of a class that is declared in the base class and redefined (overridden) in the derived class. It allows the function to be dynamically bound at runtime, based on the object's actual type rather than the reference or pointer's declared type. Virtual functions are essential for achieving runtime polymorphism in C++.

--> Features of Virtual Functions:

1. The base class declares a function as virtual using the 'virtual' keyword, and the derived class overrides it with the same function signature using the 'override' keyword.

2. Virtual functions are used when you want to call the most specific version of a function based on the type of the object being referenced or pointed to, rather than the type of the reference or pointer.

3. The concept of virtual functions is related to late binding or dynamic binding, where the actual function to be called is determined at runtime.

--> Example of Virtual Function:

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a generic shape." << endl;
    }
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a circle." << endl;
    }
};

int main()
{
    Shape* shapePtr;
    Circle circle;

    shapePtr = &circle; // Assigning address of derived class object to the base class pointer
    shapePtr->draw();   // Output: Drawing a circle.

    return 0;
}

)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a generic shape." << endl;
    }
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a circle." << endl;
    }
};

int main()
{
    Shape* shapePtr;
    Circle circle;

    shapePtr = &circle; // Assigning address of derived class object to the base class pointer
    shapePtr->draw();   // Output: Drawing a circle.

    return 0;
}
)";
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            system("clear");

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}

void templates()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Theory. \n";
        cout << "2. Source Code. \n";
        cin >> option;
        system("clear");
        if (option < 1 || option > 2 || cin.fail())
        {
            fail();
            continue;
        }

        // Theory
        if (option == 1)
        {
            cout << R"(--> Templates in C++:

Templates in C++ allow you to write generic functions and classes that can work with different data types without having to write separate code for each data type. The main idea behind templates is to make the code more flexible and reusable.

--> Function Templates:

A function template is a blueprint for a generic function. It allows you to define a function without specifying the data type(s) it will work with. The data type(s) are specified when the function is called.

Example of Function Template:

#include <iostream>
using namespace std;

// Function Template
template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    int sumInt = add(5, 10);
    double sumDouble = add(3.14, 2.71);

    cout << "Sum of integers: " << sumInt << endl;
    cout << "Sum of doubles: " << sumDouble << endl;

    return 0;
}

--> Class Templates:

A class template is similar to a function template but for classes. It allows you to define a class without specifying the data type(s) it will work with. The data type(s) are specified when an object of the class is created.

--> Example of Class Template:

#include <iostream>
using namespace std;

// Class Template
template <typename T>
class Pair
{
private:
    T first;
    T second;

public:
    Pair(T a, T b) : first(a), second(b) {}

    T getFirst() const { return first; }
    T getSecond() const { return second; }
};

int main()
{
    Pair<int> intPair(5, 10);
    Pair<double> doublePair(3.14, 2.71);

    cout << "First element of intPair: " << intPair.getFirst() << endl;
    cout << "Second element of doublePair: " << doublePair.getSecond() << endl;

    return 0;
}

)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(--> Example of Function Template:

#include <iostream>
using namespace std;

// Function Template
template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    int sumInt = add(5, 10);
    double sumDouble = add(3.14, 2.71);

    cout << "Sum of integers: " << sumInt << endl;
    cout << "Sum of doubles: " << sumDouble << endl;

    return 0;
}

// Example of Class Template
#include <iostream>
using namespace std;

// Class Template
template <typename T>
class Pair
{
private:
    T first;
    T second;

public:
    Pair(T a, T b) : first(a), second(b) {}

    T getFirst() const { return first; }
    T getSecond() const { return second; }
};

int main()
{
    Pair<int> intPair(5, 10);
    Pair<double> doublePair(3.14, 2.71);

    cout << "First element of intPair: " << intPair.getFirst() << endl;
    cout << "Second element of doublePair: " << doublePair.getSecond() << endl;

    return 0;
}
)";
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            system("clear");

            if (exit == 'Y' || exit == 'y')
            {
                break;
            }
            else if (exit == 'N' || exit == 'n')
            {
                return;
            }
            else
            {
                fail();
            }
        }
    }
}