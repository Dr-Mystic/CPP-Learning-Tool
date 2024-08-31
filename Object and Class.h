#include <iostream>
using namespace std;

void fail();

void objectsAndClass()
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
            cout << R"(In C++, a class is a user-defined type that encapsulates data and functions into a single entity. Objects are instances of classes, meaning they are created based on the blueprint provided by the class.

Classes allow you to define your own data types and provide a way to organize and structure your code. They enable the concept of object-oriented programming (OOP), which emphasizes the use of objects to represent real-world entities or abstract concepts.

To define a class, you use the `class` keyword followed by the class name and a set of braces enclosing the class members. The class members can include data members (variables) and member functions (methods) that operate on the data.

--> Example:

#include <iostream>
using namespace std;

// Class declaration
class Circle
{
    // Data members (variables)
    double radius;

public:
    // Member functions (methods)
    void setRadius(double r)
    {
        radius = r;
    }

    double getArea()
    {
        return 3.14159 * radius * radius;
    }
};

int main()
{
    // Create an object of the Circle class
    Circle myCircle;

    // Set the radius using the member function
    myCircle.setRadius(5.0);

    // Calculate and display the area using the member function
    cout << "Area of the circle: " << myCircle.getArea() << endl;

    return 0;
}

In this example, a class named `Circle` is defined with a data member `radius` and two member functions: `setRadius()` and `getArea()`. An object `myCircle` of the `Circle` class is created, and the radius is set using the `setRadius()` member function. The area of the circle is then calculated and displayed using the `getArea()` member function.

Classes and objects provide a powerful way to structure your code, promote code reusability, and enable the implementation of OOP principles like encapsulation, inheritance, and polymorphism.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(Example - Bank Account using Classes and Objects:

#include <iostream>
using namespace std;

// Class declaration
class BankAccount
{
    // Data members
    string accountNumber;
    string accountHolder;
    double balance;

public:
    // Member functions
    void setAccountDetails(string number, string holder, double initialBalance)
    {
        accountNumber = number;
        accountHolder = holder;
        balance = initialBalance;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance.\n";
    }

    void displayAccountInfo()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main()
{
    // Create an object of the BankAccount class
    BankAccount myAccount;

    // Set account details
    myAccount.setAccountDetails("123456789", "John Doe", 1000.0);

    // Perform transactions
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    // Display account information
    myAccount.displayAccountInfo();

    return 0;
}

In this example, a class named `BankAccount` is defined with data members `accountNumber`, `accountHolder`, and `balance`, and several member functions to perform account operations. 
An object `myAccount` of the `BankAccount` class is created, and its account details are set using the `setAccountDetails()` member function. Transactions like deposit and withdrawal are performed using the respective member functions. 
Finally, the account information is displayed using the `displayAccountInfo()` member function.

Classes and objects provide a way to model real-world entities or concepts and allow you to encapsulate related data and behavior together. They enable you to create reusable and modular code.
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

void constructors()
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
            cout << R"(In C++, a constructor is a special member function of a class that is automatically called when an object of the class is created. The constructor is used to initialize the object's data members and perform any necessary setup.

A constructor has the same name as the class and does not have a return type, not even `void`. It can have parameters to receive values that are used for initialization. If a class does not define any constructor, the compiler automatically generates a default constructor, which initializes the object with default values (zero for numeric types and null for pointers).

Constructors can be used to ensure that objects are properly initialized when they are created. They can also be overloaded to provide different ways to initialize objects based on different parameter combinations.

--> Example:

#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int width;

public:
    // Default constructor
    Rectangle()
    {
        length = 0;
        width = 0;
    }

    // Parameterized constructor
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    // Member function to calculate area
    int calculateArea()
    {
        return length * width;
    }
};

int main()
{
    // Create objects using different constructors
    Rectangle r1;               // Default constructor
    Rectangle r2(5, 10);        // Parameterized constructor

    // Calculate and display areas
    cout << "Area of r1: " << r1.calculateArea() << endl;
    cout << "Area of r2: " << r2.calculateArea() << endl;

    return 0;
}

In this example, a class named `Rectangle` is defined with two constructors: a default constructor that initializes the object with zero values for length and width, and a parameterized constructor that takes length and width as parameters and initializes the object with the provided values. Objects `r1` and `r2` are created using different constructors, and their areas are calculated using the `calculateArea()` member function.

Constructors provide a way to ensure proper initialization of objects and allow flexibility in object creation by supporting different initialization options.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(Example - Bank Account Class with Constructors:

#include <iostream>
using namespace std;

class BankAccount
{
    string accountNumber;
    string accountHolder;
    double balance;

public:
    // Default constructor
    BankAccount()
    {
        accountNumber = "";
        accountHolder = "";
        balance = 0.0;
    }

    // Parameterized constructor
    BankAccount(string number, string holder, double initialBalance)
    {
        accountNumber = number;
        accountHolder = holder;
        balance = initialBalance;
    }

    void displayAccountInfo()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main()
{
    // Create objects using different constructors
    BankAccount account1;                           // Default constructor
    BankAccount account2("123456789", "John Doe", 1000.0);  // Parameterized constructor

    // Display account information
    account1.displayAccountInfo();
    account2.displayAccountInfo();

    return 0;
}

In this example, a class named `BankAccount` is defined with a default constructor that initializes the account with empty values and zero balance, and a parameterized constructor that takes account details and initial balance as parameters and initializes the account with the provided values. Objects `account1` and `account2` are created using different constructors, and their account information is displayed using the `displayAccountInfo()` member function.

Constructors allow you to provide different ways to create objects and ensure that objects are properly initialized with meaningful values.
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

void objectsAndFunction()
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
            cout << R"(In C++, you can pass objects as function arguments and also return objects from functions. This allows you to operate on objects and manipulate their data using functions.

--> Passing Objects to Functions:
You can pass objects as function arguments by either passing them by value or by reference. When you pass an object by value, a copy of the object is created, and any modifications made to the object within the function will not affect the original object. 
When you pass an object by reference, the function operates directly on the original object, and any changes made to the object within the function will be reflected in the original object.

Returning Objects from Functions:
You can also return objects from functions. When a function returns an object, it can create and initialize a new object within the function and then return it. The returned object can be assigned to another object or used in further operations.

--> Example - Passing Objects to Functions:

#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int width;

public:
    // Member function to set dimensions of the rectangle
    void setDimensions(int l, int w)
    {
        length = l;
        width = w;
    }

    // Member function to calculate and return the area of the rectangle
    int calculateArea()
    {
        return length * width;
    }
};

// Function to display the area of a rectangle
void displayArea(Rectangle rect)
{
    cout << "Area: " << rect.calculateArea() << endl;
}

int main()
{
    Rectangle myRect;
    myRect.setDimensions(5, 3);

    displayArea(myRect);

    return 0;
}

In this example, a class `Rectangle` is defined with member functions to set the dimensions of a rectangle and calculate its area. The `displayArea()` function takes a `Rectangle` object as a parameter and calls the `calculateArea()` member function on that object to display the area.

--> Example - Returning Objects from Functions:

#include <iostream>
using namespace std;

class Time
{
    int hours;
    int minutes;

public:
    // Constructor
    Time(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    // Member function to display the time
    void displayTime()
    {
        cout << "Time: " << hours << ":" << minutes << endl;
    }

    // Function to add two Time objects and return the result
    Time addTime(Time t2)
    {
        int h = hours + t2.hours;
        int m = minutes + t2.minutes;
        if (m >= 60)
        {
            m -= 60;
            h += 1;
        }
        return Time(h, m);
    }
};

int main()
{
    Time time1(10, 30);
    Time time2(2, 45);

    Time sumTime = time1.addTime(time2);
    sumTime.displayTime();

    return 0;
}

In this example, a class `Time` is defined with a constructor to initialize the hours and minutes of a time object and a member function to display the time. The `addTime()` function takes another `Time` object as a parameter, adds the hours and minutes of both objects, and returns a new `Time` object representing the sum of the times. The returned object is then displayed using the `displayTime()` member function.

Passing objects to functions and returning objects from functions allow you to perform operations on objects and create reusable and modular code.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(--> Example - Passing Objects to Functions:

#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int width;

public:
    // Member function to set dimensions of the rectangle
    void setDimensions(int l, int w)
    {
        length = l;
        width = w;
    }

    // Member function to calculate and return the area of the rectangle
    int calculateArea()
    {
        return length * width;
    }
};

// Function to display the area of a rectangle
void displayArea(Rectangle& rect)
{
    cout << "Area: " << rect.calculateArea() << endl;
}

int main()
{
    Rectangle myRect;
    myRect.setDimensions(5, 3);

    displayArea(myRect);

    return 0;
}

In this example, a class `Rectangle` is defined with member functions to set the dimensions of a rectangle and calculate its area. The `displayArea()` function takes a `Rectangle` object as a reference parameter and calls the `calculateArea()` member function on that object to display the area. By passing the object by reference, any changes made to the object within the function will affect the original object.

--> Example - Returning Objects from Functions:

#include <iostream>
using namespace std;

class Time
{
    int hours;
    int minutes;

public:
    // Constructor
    Time(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    // Member function to display the time
    void displayTime()
    {
        cout << "Time: " << hours << ":" << minutes << endl;
    }

    // Function to add two Time objects and return the result
    Time addTime(Time& t2)
    {
        int h = hours + t2.hours;
        int m = minutes + t2.minutes;
        if (m >= 60)
        {
            m -= 60;
            h += 1;
        }
        return Time(h, m);
    }
};

int main()
{
    Time time1(10, 30);
    Time time2(2, 45);

    Time& sumTime = time1.addTime(time2);
    sumTime.displayTime();

    return 0;
}

In this example, a class `Time` is defined with a constructor to initialize the hours and minutes of a time object and a member function to display the time. The `addTime()` function takes another `Time` object as a reference parameter, adds the hours and minutes of both objects, and returns a new `Time` object representing the sum of the times. The returned object is then displayed using the `displayTime()` member function.

By passing objects by reference and returning objects from functions, you can avoid unnecessary object copying and efficiently manipulate data.
)";
        }

        // Exit
        while (true)
        {
            cout << "\nDo you want to continue? (Y/N)";
            cin >> exit;
            cout << endl;
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

void operatorOverloading()
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
            cout << R"(In C++, operator overloading allows you to define how operators behave when used with user-defined data types (objects). By overloading operators, you can make your classes and objects work with the same syntax and semantics as built-in data types.

--> Operator Overloading Syntax:
To overload an operator, you define a member function or a friend function for the class, which will be called when the operator is used on objects of that class. The syntax for overloading an operator is:

return_type operator symbol (parameters)
{
    // Implementation of operator behavior
}

Here, "operator" is a keyword, and "symbol" is the operator you want to overload. For example, to overload the "+" operator to add two objects of a class, you would define a function like this:

ClassName operator+(const ClassName& obj)
{
    // Implementation of addition operation
}

--> Example - Operator Overloading:

#include <iostream>
using namespace std;

class Complex
{
    double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    // Overload the + operator to add two Complex objects
    Complex operator+(const Complex& other) const
    {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload the << operator to output Complex objects
    friend ostream& operator<<(ostream& os, const Complex& obj)
    {
        os << obj.real << " + " << obj.imag << "i";
        return os;
    }
};

int main()
{
    Complex c1(2.5, 3.0);
    Complex c2(1.0, 2.0);

    Complex sum = c1 + c2;
    cout << "Sum: " << sum << endl;

    return 0;
}

In this example, a class `Complex` is defined to represent complex numbers. The `operator+` function is overloaded to add two `Complex` objects, and the `<<` operator is overloaded as a friend function to output `Complex` objects.

When you use the `+` operator on `Complex` objects, the overloaded `operator+` function is called, and the sum of the real and imaginary parts of both objects is returned.

Similarly, when you use the `<<` operator to output a `Complex` object, the overloaded `<<` operator is called, and the formatted complex number is displayed.
)";
        }

        // Source Code
        if (option == 2)
        {
            cout << R"(--> Example - Operator Overloading:

#include <iostream>
using namespace std;

class Complex
{
    double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    // Overload the + operator to add two Complex objects
    Complex operator+(const Complex& other) const
    {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload the << operator to output Complex objects
    friend ostream& operator<<(ostream& os, const Complex& obj)
    {
        os << obj.real << " + " << obj.imag << "i";
        return os;
    }
};

int main()
{
    Complex c1(2.5, 3.0);
    Complex c2(1.0, 2.0);

    Complex sum = c1 + c2;
    cout << "Sum: " << sum << endl;

    return 0;
}

In this example, a class `Complex` is defined to represent complex numbers. The `operator+` function is overloaded to add two `Complex` objects, and the `<<` operator is overloaded as a friend function to output `Complex` objects.

When you use the `+` operator on `Complex` objects, the overloaded `operator+` function is called, and the sum of the real and imaginary parts of both objects is returned.

Similarly, when you use the `<<` operator to output a `Complex` object, the overloaded `<<` operator is called, and the formatted complex number is displayed.
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