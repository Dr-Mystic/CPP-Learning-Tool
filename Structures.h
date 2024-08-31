#include <iostream>
using namespace std;

void fail();

void structure()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Theory. \n";
        cout << "2. Source Code. \n";
        cin >> option;
        cout << endl;
        system("clear");
        if (option < 1 || option > 2 || cin.fail())
        {
            fail();
            continue;
        }

        // Theory
        if (option == 1)
        {
            system("clear");
            cout << R"(In C++, a structure is a user-defined data type that allows you to combine different types of data into a single unit. 
It is similar to a class but with default public access to its members.
A structure declaration defines a new type, and its members can be of any built-in or user-defined type. 
You can access the members of a structure using the dot (.) operator.

--> Example:

#include <iostream>
using namespace std;

// Structure declaration
struct Rectangle
{
    double length;
    double width;
};

int main()
{
    // Structure variable declaration
    Rectangle rect;

    // Accessing structure members
    rect.length = 5.0;
    rect.width = 3.0;

    // Calculating area
    double area = rect.length * rect.width;
    cout << "Area: " << area << endl;

    return 0;
}

In this example, a structure named `Rectangle` is defined with two members: `length` and `width`. The `main()` function declares a structure variable `rect` of type `Rectangle` and assigns values to its members. The program calculates the area of the rectangle using the formula `length * width`.

Note: Structures are often used to represent a collection of related data, such as coordinates, student records, or employee details.
)";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(Example - Employee Information:

#include <iostream>
#include <string>
using namespace std;

// Structure declaration
struct Employee
{
    string name;
    int age;
    double salary;
};

// Function to display employee information
void displayEmployee(const Employee& emp)
{
    cout << "Name: " << emp.name << endl;
    cout << "Age: " << emp.age << endl;
    cout << "Salary: $" << emp.salary << endl;
}

int main()
{
    // Structure variable declaration and initialization
    Employee emp1 = {"John Doe", 30, 5000.0};

    // Displaying employee information
    displayEmployee(emp1);

    return 0;
}

In this example, a structure named `Employee` is defined with three members: `name`, `age`, and `salary`. The program declares a structure variable `emp1` of type `Employee` and initializes its members using an initializer list. The `displayEmployee()` function takes an `Employee` structure as a parameter and displays its information.

Note: Structures can be used to create custom data types to store related data and facilitate code organization.
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

void structureFunction()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Theory. \n";
        cout << "2. Source Code. \n";
        cin >> option;
        cout << endl;
        system("clear");
        if (option < 1 || option > 2 || cin.fail())
        {
            fail();
            continue;
        }

        // Theory
        if (option == 1)
        {
            system("clear");
            cout << R"(In C++, structures can be used as function parameters and return types, allowing you to pass and manipulate complex data structures easily.

--> Passing Structure as a Function Parameter:

You can pass a structure as a function parameter by value or by reference. When passed by value, a copy of the structure is made, 
and any modifications made inside the function do not affect the original structure. When passed by reference, the function can modify the original structure.

--> Example:

#include <iostream>
using namespace std;

// Structure declaration
struct Point
{
    int x;
    int y;
};

// Function to update the point coordinates by value
void updatePointByValue(Point p)
{
    p.x = 10;
    p.y = 20;
}

// Function to update the point coordinates by reference
void updatePointByReference(Point& p)
{
    p.x = 10;
    p.y = 20;
}

int main()
{
    Point p = {5, 5};

    cout << "Before update (by value): ";
    cout << "x = " << p.x << ", y = " << p.y << endl;
    updatePointByValue(p);
    cout << "After update (by value): ";
    cout << "x = " << p.x << ", y = " << p.y << endl;

    cout << "Before update (by reference): ";
    cout << "x = " << p.x << ", y = " << p.y << endl;
    updatePointByReference(p);
    cout << "After update (by reference): ";
    cout << "x = " << p.x << ", y = " << p.y << endl;

    return 0;
}

In this example, a structure named `Point` is defined with two members: `x` and `y`. The `updatePointByValue()` function takes a `Point` structure by value and attempts to update its coordinates. However, since the structure is passed by value, the modifications do not affect the original structure. The `updatePointByReference()` function takes a `Point` structure by reference, allowing it to modify the original structure.

--> Returning Structure from a Function:

You can also return a structure from a function, either by value or by reference. When returned by value, a copy of the structure is made, and you can work with the returned structure. 
When returned by reference, the function returns a reference to the original structure, avoiding the overhead of copying the entire structure.

--> Example:

#include <iostream>
using namespace std;

// Structure declaration
struct Point
{
    int x;
    int y;
};

// Function to create and return a point by value
Point createPointByValue(int x, int y)
{
    Point p;
    p.x = x;
    p.y = y;
    return p;
}

// Function to create and return a point by reference
Point& createPointByReference(int x, int y)
{
    Point* p = new Point;
    p->x = x;
    p->y = y;
    return *p;
}

int main()
{
    Point p1 = createPointByValue(5, 5);
    cout << "Point created by value: ";
    cout << "x = " << p1.x << ", y = " << p1.y << endl;

    Point& p2 = createPointByReference(10, 10);
    cout << "Point created by reference: ";
    cout << "x = " << p2.x << ", y = " << p2.y << endl;
    delete &p2;

    return 0;
}

In this example, the `createPointByValue()` function creates a `Point` structure by value and returns it. The function creates a local variable `p` of type `Point` and initializes its members. 
The structure is then copied and returned. The `createPointByReference()` function creates a `Point` structure dynamically using the `new` keyword and returns a reference to it. 
The function allocates memory for the structure on the heap, initializes its members, and returns a reference to the structure. Remember to deallocate the memory using `delete` to avoid memory leaks.

Note: Structures can be useful for representing complex data structures and can be passed to functions or returned from functions to facilitate data manipulation and organization.
)";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(Example - Rectangle Area Calculation:

#include <iostream>
using namespace std;

// Structure declaration
struct Rectangle
{
    double length;
    double width;
};

// Function to calculate the area of a rectangle
double calculateArea(const Rectangle& rect)
{
    return rect.length * rect.width;
}

int main()
{
    Rectangle rect = {5.0, 3.0};
    double area = calculateArea(rect);
    cout << "Rectangle Area: " << area << endl;

    return 0;
}

In this example, a structure named `Rectangle` is defined with two members: `length` and `width`. The `calculateArea()` function takes a `Rectangle` structure as a constant reference parameter and calculates the area by multiplying the length and width. 
The `main()` function declares a structure variable `rect` and initializes its members. It then calls the `calculateArea()` function with `rect` as an argument and stores the returned area in the `area` variable. Finally, it displays the calculated area.
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

void pointersStructure()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Theory. \n";
        cout << "2. Source Code. \n";
        cin >> option;
        cout << endl;
        system("clear");
        if (option < 1 || option > 2 || cin.fail())
        {
            fail();
            continue;
        }

        // Theory
        if (option == 1)
        {
            system("clear");
            cout << R"(In C++, you can use pointers to work with structures. Pointers allow you to dynamically allocate memory for structures, access their members, and manipulate the structure data efficiently.

--> Creating a Pointer to a Structure:

To create a pointer to a structure, you use the same syntax as creating a pointer to any other data type. 
You declare the pointer variable and assign the address of the structure using the address-of operator (&).

--> Example:

#include <iostream>
using namespace std;

// Structure declaration
struct Point
{
    int x;
    int y;
};

int main()
{
    Point* ptr;         // Pointer to a Point structure
    Point p = {5, 10};  // Declare and initialize a Point structure

    ptr = &p;           // Assign the address of p to ptr

    // Accessing structure members using pointer
    cout << "x = " << ptr->x << endl;
    cout << "y = " << ptr->y << endl;

    return 0;
}

In this example, a pointer `ptr` to a `Point` structure is declared. The `Point` structure is defined with two members: `x` and `y`. An instance of the `Point` structure named `p` is declared and initialized with values. The address of `p` is assigned to the `ptr` pointer using the address-of operator (&). To access the members of the structure using the pointer, the arrow operator (->) is used.

--> Dynamic Allocation of Structure using Pointers:

Pointers to structures are particularly useful when you want to dynamically allocate memory for a structure. 
The `new` operator is used to allocate memory for the structure, and the `delete` operator is used to release the memory when it is no longer needed.

--> Example:

#include <iostream>
using namespace std;

// Structure declaration
struct Rectangle
{
    double length;
    double width;
};

int main()
{
    Rectangle* ptr = new Rectangle;   // Allocate memory for Rectangle

    // Accessing structure members using pointer
    ptr->length = 5.0;
    ptr->width = 3.0;

    // Displaying structure members using pointer
    cout << "Length: " << ptr->length << endl;
    cout << "Width: " << ptr->width << endl;

    delete ptr;   // Deallocate memory

    return 0;
}

In this example, a pointer `ptr` to a `Rectangle` structure is declared. Memory is dynamically allocated for the structure using the `new` operator. The members of the structure are accessed and modified using the pointer. Finally, the memory is deallocated using the `delete` operator.

Note: When using pointers to structures, ensure that the structure is allocated or exists before accessing its members using the pointer.
)";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(Example - Employee Details using Pointers to Structures:

#include <iostream>
#include <string>
using namespace std;

// Structure declaration
struct Employee
{
    int id;
    string name;
    double salary;
};

// Function to display employee details
void displayEmployee(const Employee* emp)
{
    cout << "Employee ID: " << emp->id << endl;
    cout << "Employee Name: " << emp->name << endl;
    cout << "Employee Salary: $" << emp->salary << endl;
}

int main()
{
    Employee* empPtr = new Employee;   // Allocate memory for Employee

    // Input employee details using pointer
    cout << "Enter Employee ID: ";
    cin >> empPtr->id;
    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, empPtr->name);

    cout << "Enter Employee Salary: ";
    cin >> empPtr->salary;

    // Display employee details using pointer
    displayEmployee(empPtr);

    delete empPtr;   // Deallocate memory

    return 0;
}

In this example, a structure named `Employee` is defined with three members: `id`, `name`, and `salary`. The `displayEmployee()` function takes a constant pointer to an `Employee` structure and displays its details. 
In the `main()` function, memory is dynamically allocated for an `Employee` structure using the `new` operator. The employee details are inputted using the pointer, and then the `displayEmployee()` function is called to display the details. 
Finally, the memory is deallocated using the `delete` operator.
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

void enumeration()
{
    while (true)
    {
        int option;
        char exit;

        cout << "1. Theory. \n";
        cout << "2. Source Code. \n";
        cin >> option;
        cout << endl;
        system("clear");
        if (option < 1 || option > 2 || cin.fail())
        {
            fail();
            continue;
        }

        // Theory
        if (option == 1)
        {
            system("clear");
            cout << R"(In C++, an enumeration is a user-defined type that consists of a set of named constants. Enumerations provide a way to define a group of related constants that can be used throughout your program.

Enumerations are useful for improving code readability, making it easier to understand and maintain. By using meaningful names for the constants, you can enhance the clarity of your code.

To define an enumeration, you use the `enum` keyword followed by the enumeration name and the list of constant names enclosed in curly braces. 
Each constant is assigned a default value, starting from 0 and incrementing by 1 for subsequent constants. However, you can also assign specific values to the constants.

--> Example:

#include <iostream>
using namespace std;

// Enumeration declaration
enum Day
{
    Sunday,     // 0
    Monday,     // 1
    Tuesday,    // 2
    Wednesday,  // 3
    Thursday,   // 4
    Friday,     // 5
    Saturday    // 6
};

int main()
{
    Day today = Monday;   // Declare and initialize a variable of type Day

    // Using enumeration constants
    cout << "Today is ";
    switch (today)
    {
        case Sunday:
            cout << "Sunday";
            break;
        case Monday:
            cout << "Monday";
            break;
        case Tuesday:
            cout << "Tuesday";
            break;
        case Wednesday:
            cout << "Wednesday";
            break;
        case Thursday:
            cout << "Thursday";
            break;
        case Friday:
            cout << "Friday";
            break;
        case Saturday:
            cout << "Saturday";
            break;
    }

    return 0;
}

In this example, an enumeration named `Day` is defined with the names of the days of the week. The `Day` enumeration is used to declare a variable named `today` and assign it the value `Monday`. The `switch` statement is used to display the corresponding day based on the value of `today`.

Note: By default, the constants in an enumeration have integer values starting from 0. You can explicitly assign specific values to the constants by providing an initializer for each constant. You can also assign non-integer values to the constants.

Enumerations can be used as a convenient way to define a set of related constants, making your code more expressive and self-explanatory.
)";
        }

        // Source Code
        if (option == 2)
        {
            system("clear");
            cout << R"(Example - Colors using Enumerations:

#include <iostream>
using namespace std;

// Enumeration declaration
enum Color
{
    Red,
    Green,
    Blue,
    Yellow,
    Orange,
    Purple
};

int main()
{
    Color selectedColor;   // Declare a variable of type Color

    // Input the color choice
    int choice;
    cout << "Select a color:\n";
    cout << "1. Red\n";
    cout << "2. Green\n";
    cout << "3. Blue\n";
    cout << "4. Yellow\n";
    cout << "5. Orange\n";
    cout << "6. Purple\n";
    cout << "Enter your choice: ";
    cin >> choice;

    // Assign the selected color based on the choice
    switch (choice)
    {
        case 1:
            selectedColor = Red;
            break;
        case 2:
            selectedColor = Green;
            break;
        case 3:
            selectedColor = Blue;
            break;
        case 4:
            selectedColor = Yellow;
            break;
        case 5:
            selectedColor = Orange;
            break;
        case 6:
            selectedColor = Purple;
            break;
        default:
            cout << "Invalid choice. Setting color to Red.\n";
            selectedColor = Red;
    }

    // Display the selected color
    cout << "Selected color: ";
    switch (selectedColor)
    {
        case Red:
            cout << "Red";
            break;
        case Green:
            cout << "Green";
            break;
        case Blue:
            cout << "Blue";
            break;
        case Yellow:
            cout << "Yellow";
            break;
        case Orange:
            cout << "Orange";
            break;
        case Purple:
            cout << "Purple";
            break;
    }

    return 0;
}

In this example, an enumeration named `Color` is defined with several color constants. The user is prompted to select a color by entering a choice. Based on the choice, the corresponding color is assigned to the `selectedColor` variable. The color is then displayed based on the value of `selectedColor`.

Enumerations provide a convenient way to work with a set of related constants, such as colors, days of the week, etc. They make the code more readable and self-explanatory.
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